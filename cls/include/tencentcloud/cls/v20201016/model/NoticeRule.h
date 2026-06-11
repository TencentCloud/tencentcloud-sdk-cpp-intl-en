/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/EscalateNoticeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Notification rules
                */
                class NoticeRule : public AbstractModel
                {
                public:
                    NoticeRule();
                    ~NoticeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Match rule JSON string.
**rule tree format is a nested structure JSON string**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**Rule tree limiting rules are as follows**:
-Valid values for Type in the top-level rule: `Condition`, `Operation`
-Valid values for the Type of the `Operation` sub-node: `Condition`, `Operation`
-Valid values for the Type of a `Condition` sub-node: `String`, `Compare`, `Array`, `TimeRange`, `Value`, `Key`.
-Other types have no sub-node
-When rule Type is `Operation`, the valid values for value are `AND`, `OR`.
-When rule Type is `Condition`, value is required and the number of child nodes cannot be less than 2.
-When the sub-node Type is `Compare`, the valid values for value are `>`, `<`, `>=`, `<=`, `=`, `!=`, `Between`, `NotBetween`, `=~`, `!=~`, `In`, `NotIn`.
-When the value is `Between` or `NotBetween`, the next sub-node value must be an array of length 2.
-When the value is `=~` or `!=~`, the next sub-node value must be a regular expression.
-When value is `In` or `NotIn`, the next sub-node value must be an array.

**Business parameter meaning**:
-Type: Condition means the rule condition. Value: Level means the alarm level.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 0 (warning), 1 (reminder), 2 (critical).
The following example means the alarm level belongs to reminder.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

-Type: Condition means rule condition. Value: NotifyType refers to notification type.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 1 (alarm notification), 2 (recovery notification).
The following example means the notification type belongs to alarm notification or the notification type is not within restoration notification.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: AlarmID indicates alarm policy.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: alarm policy id array.
The following example means: The alarm policy belongs to alarm-53af048c-254b-4c73-bb48-xxx, alarm-6dfa8bc5-08da-4d64-b6cb-xxx or the alarm policy does not belong to alarm-1036314c-1e49-4cee-a8fb-xxx.
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

-Type: Condition means the rule condition. Value: AlarmName means the alarm policy name.
-Sub-node Type supports `Compare`, and Value supports `=~`, `!=~`
-Next sub-node value supported values: Must be a regular expression.
The following example means the alarm policy name regular expression matching ^test$ or the alarm policy name regular expression mismatch ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: Label refers to alarm classification field.
- The sub-node Type supports `Compare`, and Value supports `In`, `NotIn`, `=~`, `!=~`.
-Supported values for the next sub-node value: `In`, `NotIn` where value is an array, `=~`, `!=~` where value is a regex.
The following example means: the alarm classification field key1 belongs to v1, or the alarm classification field key2 NOT_IN v2, or the alarm classification field key3 matches the regular expression ^test$, or the alarm classification field key4 does not match the regular expression ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means Rule Condition. Value: NotifyTime refers to notification time.
- Sub-node Type supports `Compare`, and Value supports `Between`, `NotBetween`
-Next sub-node value supported values: An array of strings with a length of 2 in the format `14:20:36`.
The following example indicates the notification time is within the specified scope 14:18:36 to 14:33:36 or not within specified range 14:20:36 to 14:30:36.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means the rule condition. Value: Duration indicates the duration of the alarm.
-The sub-node Type supports `Compare`, and Value supports `>`, `<`, `>=`, `<=`.
-Next sub-node value supported values: integer value in minutes
The following example means: the duration of the alarm is greater than 1 minute, equal to or greater than 2 minutes, less than 3 minutes, or less than or equal to 4 minutes.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * @return Rule Match rule JSON string.
**rule tree format is a nested structure JSON string**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**Rule tree limiting rules are as follows**:
-Valid values for Type in the top-level rule: `Condition`, `Operation`
-Valid values for the Type of the `Operation` sub-node: `Condition`, `Operation`
-Valid values for the Type of a `Condition` sub-node: `String`, `Compare`, `Array`, `TimeRange`, `Value`, `Key`.
-Other types have no sub-node
-When rule Type is `Operation`, the valid values for value are `AND`, `OR`.
-When rule Type is `Condition`, value is required and the number of child nodes cannot be less than 2.
-When the sub-node Type is `Compare`, the valid values for value are `>`, `<`, `>=`, `<=`, `=`, `!=`, `Between`, `NotBetween`, `=~`, `!=~`, `In`, `NotIn`.
-When the value is `Between` or `NotBetween`, the next sub-node value must be an array of length 2.
-When the value is `=~` or `!=~`, the next sub-node value must be a regular expression.
-When value is `In` or `NotIn`, the next sub-node value must be an array.

**Business parameter meaning**:
-Type: Condition means the rule condition. Value: Level means the alarm level.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 0 (warning), 1 (reminder), 2 (critical).
The following example means the alarm level belongs to reminder.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

-Type: Condition means rule condition. Value: NotifyType refers to notification type.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 1 (alarm notification), 2 (recovery notification).
The following example means the notification type belongs to alarm notification or the notification type is not within restoration notification.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: AlarmID indicates alarm policy.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: alarm policy id array.
The following example means: The alarm policy belongs to alarm-53af048c-254b-4c73-bb48-xxx, alarm-6dfa8bc5-08da-4d64-b6cb-xxx or the alarm policy does not belong to alarm-1036314c-1e49-4cee-a8fb-xxx.
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

-Type: Condition means the rule condition. Value: AlarmName means the alarm policy name.
-Sub-node Type supports `Compare`, and Value supports `=~`, `!=~`
-Next sub-node value supported values: Must be a regular expression.
The following example means the alarm policy name regular expression matching ^test$ or the alarm policy name regular expression mismatch ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: Label refers to alarm classification field.
- The sub-node Type supports `Compare`, and Value supports `In`, `NotIn`, `=~`, `!=~`.
-Supported values for the next sub-node value: `In`, `NotIn` where value is an array, `=~`, `!=~` where value is a regex.
The following example means: the alarm classification field key1 belongs to v1, or the alarm classification field key2 NOT_IN v2, or the alarm classification field key3 matches the regular expression ^test$, or the alarm classification field key4 does not match the regular expression ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means Rule Condition. Value: NotifyTime refers to notification time.
- Sub-node Type supports `Compare`, and Value supports `Between`, `NotBetween`
-Next sub-node value supported values: An array of strings with a length of 2 in the format `14:20:36`.
The following example indicates the notification time is within the specified scope 14:18:36 to 14:33:36 or not within specified range 14:20:36 to 14:30:36.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means the rule condition. Value: Duration indicates the duration of the alarm.
-The sub-node Type supports `Compare`, and Value supports `>`, `<`, `>=`, `<=`.
-Next sub-node value supported values: integer value in minutes
The following example means: the duration of the alarm is greater than 1 minute, equal to or greater than 2 minutes, less than 3 minutes, or less than or equal to 4 minutes.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置Match rule JSON string.
**rule tree format is a nested structure JSON string**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**Rule tree limiting rules are as follows**:
-Valid values for Type in the top-level rule: `Condition`, `Operation`
-Valid values for the Type of the `Operation` sub-node: `Condition`, `Operation`
-Valid values for the Type of a `Condition` sub-node: `String`, `Compare`, `Array`, `TimeRange`, `Value`, `Key`.
-Other types have no sub-node
-When rule Type is `Operation`, the valid values for value are `AND`, `OR`.
-When rule Type is `Condition`, value is required and the number of child nodes cannot be less than 2.
-When the sub-node Type is `Compare`, the valid values for value are `>`, `<`, `>=`, `<=`, `=`, `!=`, `Between`, `NotBetween`, `=~`, `!=~`, `In`, `NotIn`.
-When the value is `Between` or `NotBetween`, the next sub-node value must be an array of length 2.
-When the value is `=~` or `!=~`, the next sub-node value must be a regular expression.
-When value is `In` or `NotIn`, the next sub-node value must be an array.

**Business parameter meaning**:
-Type: Condition means the rule condition. Value: Level means the alarm level.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 0 (warning), 1 (reminder), 2 (critical).
The following example means the alarm level belongs to reminder.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

-Type: Condition means rule condition. Value: NotifyType refers to notification type.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 1 (alarm notification), 2 (recovery notification).
The following example means the notification type belongs to alarm notification or the notification type is not within restoration notification.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: AlarmID indicates alarm policy.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: alarm policy id array.
The following example means: The alarm policy belongs to alarm-53af048c-254b-4c73-bb48-xxx, alarm-6dfa8bc5-08da-4d64-b6cb-xxx or the alarm policy does not belong to alarm-1036314c-1e49-4cee-a8fb-xxx.
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

-Type: Condition means the rule condition. Value: AlarmName means the alarm policy name.
-Sub-node Type supports `Compare`, and Value supports `=~`, `!=~`
-Next sub-node value supported values: Must be a regular expression.
The following example means the alarm policy name regular expression matching ^test$ or the alarm policy name regular expression mismatch ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: Label refers to alarm classification field.
- The sub-node Type supports `Compare`, and Value supports `In`, `NotIn`, `=~`, `!=~`.
-Supported values for the next sub-node value: `In`, `NotIn` where value is an array, `=~`, `!=~` where value is a regex.
The following example means: the alarm classification field key1 belongs to v1, or the alarm classification field key2 NOT_IN v2, or the alarm classification field key3 matches the regular expression ^test$, or the alarm classification field key4 does not match the regular expression ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means Rule Condition. Value: NotifyTime refers to notification time.
- Sub-node Type supports `Compare`, and Value supports `Between`, `NotBetween`
-Next sub-node value supported values: An array of strings with a length of 2 in the format `14:20:36`.
The following example indicates the notification time is within the specified scope 14:18:36 to 14:33:36 or not within specified range 14:20:36 to 14:30:36.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means the rule condition. Value: Duration indicates the duration of the alarm.
-The sub-node Type supports `Compare`, and Value supports `>`, `<`, `>=`, `<=`.
-Next sub-node value supported values: integer value in minutes
The following example means: the duration of the alarm is greater than 1 minute, equal to or greater than 2 minutes, less than 3 minutes, or less than or equal to 4 minutes.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * @param _rule Match rule JSON string.
**rule tree format is a nested structure JSON string**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**Rule tree limiting rules are as follows**:
-Valid values for Type in the top-level rule: `Condition`, `Operation`
-Valid values for the Type of the `Operation` sub-node: `Condition`, `Operation`
-Valid values for the Type of a `Condition` sub-node: `String`, `Compare`, `Array`, `TimeRange`, `Value`, `Key`.
-Other types have no sub-node
-When rule Type is `Operation`, the valid values for value are `AND`, `OR`.
-When rule Type is `Condition`, value is required and the number of child nodes cannot be less than 2.
-When the sub-node Type is `Compare`, the valid values for value are `>`, `<`, `>=`, `<=`, `=`, `!=`, `Between`, `NotBetween`, `=~`, `!=~`, `In`, `NotIn`.
-When the value is `Between` or `NotBetween`, the next sub-node value must be an array of length 2.
-When the value is `=~` or `!=~`, the next sub-node value must be a regular expression.
-When value is `In` or `NotIn`, the next sub-node value must be an array.

**Business parameter meaning**:
-Type: Condition means the rule condition. Value: Level means the alarm level.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 0 (warning), 1 (reminder), 2 (critical).
The following example means the alarm level belongs to reminder.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

-Type: Condition means rule condition. Value: NotifyType refers to notification type.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 1 (alarm notification), 2 (recovery notification).
The following example means the notification type belongs to alarm notification or the notification type is not within restoration notification.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: AlarmID indicates alarm policy.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: alarm policy id array.
The following example means: The alarm policy belongs to alarm-53af048c-254b-4c73-bb48-xxx, alarm-6dfa8bc5-08da-4d64-b6cb-xxx or the alarm policy does not belong to alarm-1036314c-1e49-4cee-a8fb-xxx.
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

-Type: Condition means the rule condition. Value: AlarmName means the alarm policy name.
-Sub-node Type supports `Compare`, and Value supports `=~`, `!=~`
-Next sub-node value supported values: Must be a regular expression.
The following example means the alarm policy name regular expression matching ^test$ or the alarm policy name regular expression mismatch ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: Label refers to alarm classification field.
- The sub-node Type supports `Compare`, and Value supports `In`, `NotIn`, `=~`, `!=~`.
-Supported values for the next sub-node value: `In`, `NotIn` where value is an array, `=~`, `!=~` where value is a regex.
The following example means: the alarm classification field key1 belongs to v1, or the alarm classification field key2 NOT_IN v2, or the alarm classification field key3 matches the regular expression ^test$, or the alarm classification field key4 does not match the regular expression ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means Rule Condition. Value: NotifyTime refers to notification time.
- Sub-node Type supports `Compare`, and Value supports `Between`, `NotBetween`
-Next sub-node value supported values: An array of strings with a length of 2 in the format `14:20:36`.
The following example indicates the notification time is within the specified scope 14:18:36 to 14:33:36 or not within specified range 14:20:36 to 14:30:36.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means the rule condition. Value: Duration indicates the duration of the alarm.
-The sub-node Type supports `Compare`, and Value supports `>`, `<`, `>=`, `<=`.
-Next sub-node value supported values: integer value in minutes
The following example means: the duration of the alarm is greater than 1 minute, equal to or greater than 2 minutes, less than 3 minutes, or less than or equal to 4 minutes.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Alarm notification recipient information.
                     * @return NoticeReceivers Alarm notification recipient information.
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置Alarm notification recipient information.
                     * @param _noticeReceivers Alarm notification recipient information.
                     * 
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     * 
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取Alarm notification template callback information, including WeCom, DingTalk, and Lark.
                     * @return WebCallbacks Alarm notification template callback information, including WeCom, DingTalk, and Lark.
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置Alarm notification template callback information, including WeCom, DingTalk, and Lark.
                     * @param _webCallbacks Alarm notification template callback information, including WeCom, DingTalk, and Lark.
                     * 
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     * 
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * @return Escalate Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * 
                     */
                    bool GetEscalate() const;

                    /**
                     * 设置Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * @param _escalate Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     * 
                     */
                    void SetEscalate(const bool& _escalate);

                    /**
                     * 判断参数 Escalate 是否已赋值
                     * @return Escalate 是否已赋值
                     * 
                     */
                    bool EscalateHasBeenSet() const;

                    /**
                     * 获取Alarm escalation conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered. Default is 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * @return Type Alarm escalation conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered. Default is 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Alarm escalation conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered. Default is 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * @param _type Alarm escalation conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered. Default is 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * @return Interval Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * @param _interval Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Notification channel configuration for the next step after alarm severity escalation.
                     * @return EscalateNotice Notification channel configuration for the next step after alarm severity escalation.
                     * 
                     */
                    EscalateNoticeInfo GetEscalateNotice() const;

                    /**
                     * 设置Notification channel configuration for the next step after alarm severity escalation.
                     * @param _escalateNotice Notification channel configuration for the next step after alarm severity escalation.
                     * 
                     */
                    void SetEscalateNotice(const EscalateNoticeInfo& _escalateNotice);

                    /**
                     * 判断参数 EscalateNotice 是否已赋值
                     * @return EscalateNotice 是否已赋值
                     * 
                     */
                    bool EscalateNoticeHasBeenSet() const;

                private:

                    /**
                     * Match rule JSON string.
**rule tree format is a nested structure JSON string**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**Rule tree limiting rules are as follows**:
-Valid values for Type in the top-level rule: `Condition`, `Operation`
-Valid values for the Type of the `Operation` sub-node: `Condition`, `Operation`
-Valid values for the Type of a `Condition` sub-node: `String`, `Compare`, `Array`, `TimeRange`, `Value`, `Key`.
-Other types have no sub-node
-When rule Type is `Operation`, the valid values for value are `AND`, `OR`.
-When rule Type is `Condition`, value is required and the number of child nodes cannot be less than 2.
-When the sub-node Type is `Compare`, the valid values for value are `>`, `<`, `>=`, `<=`, `=`, `!=`, `Between`, `NotBetween`, `=~`, `!=~`, `In`, `NotIn`.
-When the value is `Between` or `NotBetween`, the next sub-node value must be an array of length 2.
-When the value is `=~` or `!=~`, the next sub-node value must be a regular expression.
-When value is `In` or `NotIn`, the next sub-node value must be an array.

**Business parameter meaning**:
-Type: Condition means the rule condition. Value: Level means the alarm level.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 0 (warning), 1 (reminder), 2 (critical).
The following example means the alarm level belongs to reminder.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

-Type: Condition means rule condition. Value: NotifyType refers to notification type.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: 1 (alarm notification), 2 (recovery notification).
The following example means the notification type belongs to alarm notification or the notification type is not within restoration notification.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: AlarmID indicates alarm policy.
-Sub-node Type supports `Compare`, and Value supports `In` and `NotIn`.
-Supported values for the next sub-node value: alarm policy id array.
The following example means: The alarm policy belongs to alarm-53af048c-254b-4c73-bb48-xxx, alarm-6dfa8bc5-08da-4d64-b6cb-xxx or the alarm policy does not belong to alarm-1036314c-1e49-4cee-a8fb-xxx.
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

-Type: Condition means the rule condition. Value: AlarmName means the alarm policy name.
-Sub-node Type supports `Compare`, and Value supports `=~`, `!=~`
-Next sub-node value supported values: Must be a regular expression.
The following example means the alarm policy name regular expression matching ^test$ or the alarm policy name regular expression mismatch ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means rule condition. Value: Label refers to alarm classification field.
- The sub-node Type supports `Compare`, and Value supports `In`, `NotIn`, `=~`, `!=~`.
-Supported values for the next sub-node value: `In`, `NotIn` where value is an array, `=~`, `!=~` where value is a regex.
The following example means: the alarm classification field key1 belongs to v1, or the alarm classification field key2 NOT_IN v2, or the alarm classification field key3 matches the regular expression ^test$, or the alarm classification field key4 does not match the regular expression ^hahaha$.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means Rule Condition. Value: NotifyTime refers to notification time.
- Sub-node Type supports `Compare`, and Value supports `Between`, `NotBetween`
-Next sub-node value supported values: An array of strings with a length of 2 in the format `14:20:36`.
The following example indicates the notification time is within the specified scope 14:18:36 to 14:33:36 or not within specified range 14:20:36 to 14:30:36.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

-Type: Condition means the rule condition. Value: Duration indicates the duration of the alarm.
-The sub-node Type supports `Compare`, and Value supports `>`, `<`, `>=`, `<=`.
-Next sub-node value supported values: integer value in minutes
The following example means: the duration of the alarm is greater than 1 minute, equal to or greater than 2 minutes, less than 3 minutes, or less than or equal to 4 minutes.
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Alarm notification recipient information.
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * Alarm notification template callback information, including WeCom, DingTalk, and Lark.
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * Alarm escalation switch. `true`: enable alarm escalation, `false`: disable alarm escalation. Default: false.
                     */
                    bool m_escalate;
                    bool m_escalateHasBeenSet;

                    /**
                     * Alarm escalation conditions. `1`: Unclaimed and unrecovered, `2`: Unrecovered. Default is 1.
-Unclaimed and unrecovered: Upgrade if the alert is not restored and no one claims it.
-Unrecovered: Upgrade if the alarm persists without recovery.

                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Escalate alarms interval. Unit: minutes, range `[1, 14400]`.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Notification channel configuration for the next step after alarm severity escalation.
                     */
                    EscalateNoticeInfo m_escalateNotice;
                    bool m_escalateNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
