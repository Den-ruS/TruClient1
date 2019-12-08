//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://test.youplace.net/'", "snapshot=Action_1.inf");
	truclient_step("2", "Click on Start test button", "snapshot=Action_2.inf");
	truclient_step("4", "For ( var i = 0 ; i<99 ; i++ )", "snapshot=Action_4.inf");
	{
		truclient_step("4.1", "If Repeat the test link exists", "snapshot=Action_4.1.inf");
		{
			truclient_step("4.1.1", "Break", "snapshot=Action_4.1.1.inf");
		}
		truclient_step("4.2", "Evaluate JavaScript code  	var elname='' 	var ell...Index=j} 		} 	}", "snapshot=Action_4.2.inf");
		truclient_step("4.3", "Click on Submit button", "snapshot=Action_4.3.inf");
	}

	return 0;
}
