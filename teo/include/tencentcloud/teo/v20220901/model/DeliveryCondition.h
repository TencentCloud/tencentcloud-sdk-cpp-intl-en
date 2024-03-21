/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELIVERYCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELIVERYCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Real-time log delivery conditions used to define the scope of log delivery. The relationship between items in a DeliveryCondition array is "or", whereas the relationship between items in an inner Conditions array is "and".
                */
                class DeliveryCondition : public AbstractModel
                {
                public:
                    DeliveryCondition();
                    ~DeliveryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log filter conditions. Detailed filter conditions are as follows:
<li>EdgeResponseStatusCode: Filter by status code returned to the client by the EdgeOne node.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to 0</li>
<li>OriginResponseStatusCode: Filter by response status code of the origin server.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to -1</li>
<li>SecurityAction: Filter by final action after the request hits the security rule.<br>      Supported operators: equal<br>      Options are as follows:<br>      -: Unknown/unhit<br>      Monitor: Log only<br>      JSChallenge: JavaScript challenge<br>      Deny: Interception<br>      Allow: Allow<br>      BlockIP: IP ban<br>      Redirect: Redirect<br>      ReturnCustomPage: Return to custom page<br>      ManagedChallenge: Managed challenge<br>      Silence: Silence<br>      LongDelay: Response after a long wait<br>      ShortDelay: Response after a short wait</li>
                     * @return Conditions Log filter conditions. Detailed filter conditions are as follows:
<li>EdgeResponseStatusCode: Filter by status code returned to the client by the EdgeOne node.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to 0</li>
<li>OriginResponseStatusCode: Filter by response status code of the origin server.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to -1</li>
<li>SecurityAction: Filter by final action after the request hits the security rule.<br>      Supported operators: equal<br>      Options are as follows:<br>      -: Unknown/unhit<br>      Monitor: Log only<br>      JSChallenge: JavaScript challenge<br>      Deny: Interception<br>      Allow: Allow<br>      BlockIP: IP ban<br>      Redirect: Redirect<br>      ReturnCustomPage: Return to custom page<br>      ManagedChallenge: Managed challenge<br>      Silence: Silence<br>      LongDelay: Response after a long wait<br>      ShortDelay: Response after a short wait</li>
                     * 
                     */
                    std::vector<QueryCondition> GetConditions() const;

                    /**
                     * 设置Log filter conditions. Detailed filter conditions are as follows:
<li>EdgeResponseStatusCode: Filter by status code returned to the client by the EdgeOne node.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to 0</li>
<li>OriginResponseStatusCode: Filter by response status code of the origin server.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to -1</li>
<li>SecurityAction: Filter by final action after the request hits the security rule.<br>      Supported operators: equal<br>      Options are as follows:<br>      -: Unknown/unhit<br>      Monitor: Log only<br>      JSChallenge: JavaScript challenge<br>      Deny: Interception<br>      Allow: Allow<br>      BlockIP: IP ban<br>      Redirect: Redirect<br>      ReturnCustomPage: Return to custom page<br>      ManagedChallenge: Managed challenge<br>      Silence: Silence<br>      LongDelay: Response after a long wait<br>      ShortDelay: Response after a short wait</li>
                     * @param _conditions Log filter conditions. Detailed filter conditions are as follows:
<li>EdgeResponseStatusCode: Filter by status code returned to the client by the EdgeOne node.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to 0</li>
<li>OriginResponseStatusCode: Filter by response status code of the origin server.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to -1</li>
<li>SecurityAction: Filter by final action after the request hits the security rule.<br>      Supported operators: equal<br>      Options are as follows:<br>      -: Unknown/unhit<br>      Monitor: Log only<br>      JSChallenge: JavaScript challenge<br>      Deny: Interception<br>      Allow: Allow<br>      BlockIP: IP ban<br>      Redirect: Redirect<br>      ReturnCustomPage: Return to custom page<br>      ManagedChallenge: Managed challenge<br>      Silence: Silence<br>      LongDelay: Response after a long wait<br>      ShortDelay: Response after a short wait</li>
                     * 
                     */
                    void SetConditions(const std::vector<QueryCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * Log filter conditions. Detailed filter conditions are as follows:
<li>EdgeResponseStatusCode: Filter by status code returned to the client by the EdgeOne node.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to 0</li>
<li>OriginResponseStatusCode: Filter by response status code of the origin server.<br>      Supported operators: equal, great, less, great_equal, less_equal<br>      Value range: Any integer greater than or equal to -1</li>
<li>SecurityAction: Filter by final action after the request hits the security rule.<br>      Supported operators: equal<br>      Options are as follows:<br>      -: Unknown/unhit<br>      Monitor: Log only<br>      JSChallenge: JavaScript challenge<br>      Deny: Interception<br>      Allow: Allow<br>      BlockIP: IP ban<br>      Redirect: Redirect<br>      ReturnCustomPage: Return to custom page<br>      ManagedChallenge: Managed challenge<br>      Silence: Silence<br>      LongDelay: Response after a long wait<br>      ShortDelay: Response after a short wait</li>
                     */
                    std::vector<QueryCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELIVERYCONDITION_H_
