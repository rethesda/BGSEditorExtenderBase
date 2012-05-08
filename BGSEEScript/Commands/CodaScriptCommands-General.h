#pragma once
#include "CodaScriptCommand.h"

namespace BGSEditorExtender
{
	namespace BGSEEScript
	{
		namespace Commands
		{
			namespace General
			{
				CodaScriptCommandRegistrarDecl;

				CodaScriptVariadicCommandPrototype(Return,
					0,
					"Stops the execution of the calling script and optionally returns a value.",
					"Example:<p><code class=\"s\">Return(45 + 12.4 * 0.1)</code></p>",
					ICodaScriptDataStore::kDataType_Invalid);

				CodaScriptVariadicCommandPrototype(Call,
					0,
					"Invokes a function call. Should be followed by the function script's name and a list of arguments matching the types expected by it, if any. Returns the result of the caller function, or zero if the call fails or if the function doesn't return a value.",
					"Example:<p><code class=\"s\">refVar = (ref)Call(\"CustomFunctionScript\", \"arg1\", 23.43, refVar)</code></p>",
					ICodaScriptCommand::ParameterInfo::kType_Multi);

				CodaScriptSimpleCommandPrototype(Break,
					0,
					"Causes the loop to exit immediately, forcing execution to jump to the instruction immediately following the next Loop command.",
					0,
					ICodaScriptDataStore::kDataType_Invalid);

				CodaScriptSimpleCommandPrototype(Continue,
					0,
					"Skips to the rest of the body of a loop, returning execution to the top of the loop and evaluating the loop condition. If the condition passes, execution enters the loop body, otherwise the loop terminates and continues from the instruction following the corresponding Loop command. Only valid inside a loop context.",
					0,
					ICodaScriptDataStore::kDataType_Invalid);

				CodaScriptSimpleCommandPrototype(GetSecondsPassed,
					0,
					"Returns the amount of time passed since the last execution of the calling script. Only useful in background scripts.",
					0,
					ICodaScriptDataStore::kDataType_Numeric);

				CodaScriptCommandPrototype(FormatNumber,
					"FmtNum",
					"Formats a numeric value as a string.",
					"Refer to <a href=\"http://msdn.microsoft.com/en-us/library/56e442dc(v=VS.100).aspx\">article</a> for format specification info.",
					3,
					ICodaScriptDataStore::kDataType_String);

				CodaScriptParametricCommandPrototype(PrintToConsole,
					"PrintC",
					"Prints a message to the BGSEE Console window.",
					0,
					1,
					OneString,
					ICodaScriptDataStore::kDataType_Invalid);
			}
		}
	}
}