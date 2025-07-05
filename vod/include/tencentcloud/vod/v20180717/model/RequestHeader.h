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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REQUESTHEADER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REQUESTHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/HttpHeaderPathRule.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Custom request header configuration. This is disabled by default.
                */
                class RequestHeader : public AbstractModel
                {
                public:
                    RequestHeader();
                    ~RequestHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom request header configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * @return Switch Custom request header configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Custom request header configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * @param _switch Custom request header configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Custom request header configuration rules
                     * @return HeaderRules Custom request header configuration rules
                     * 
                     */
                    std::vector<HttpHeaderPathRule> GetHeaderRules() const;

                    /**
                     * 设置Custom request header configuration rules
                     * @param _headerRules Custom request header configuration rules
                     * 
                     */
                    void SetHeaderRules(const std::vector<HttpHeaderPathRule>& _headerRules);

                    /**
                     * 判断参数 HeaderRules 是否已赋值
                     * @return HeaderRules 是否已赋值
                     * 
                     */
                    bool HeaderRulesHasBeenSet() const;

                private:

                    /**
                     * Custom request header configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Custom request header configuration rules
                     */
                    std::vector<HttpHeaderPathRule> m_headerRules;
                    bool m_headerRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REQUESTHEADER_H_
