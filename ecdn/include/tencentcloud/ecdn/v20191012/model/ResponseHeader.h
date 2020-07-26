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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_RESPONSEHEADER_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_RESPONSEHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/HttpHeaderPathRule.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Custom response header configuration.
                */
                class ResponseHeader : public AbstractModel
                {
                public:
                    ResponseHeader();
                    ~ResponseHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom response header switch. Valid values: on, off.
                     * @return Switch Custom response header switch. Valid values: on, off.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Custom response header switch. Valid values: on, off.
                     * @param Switch Custom response header switch. Valid values: on, off.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Custom response header rule array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HeaderRules Custom response header rule array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<HttpHeaderPathRule> GetHeaderRules() const;

                    /**
                     * 设置Custom response header rule array.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HeaderRules Custom response header rule array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeaderRules(const std::vector<HttpHeaderPathRule>& _headerRules);

                    /**
                     * 判断参数 HeaderRules 是否已赋值
                     * @return HeaderRules 是否已赋值
                     */
                    bool HeaderRulesHasBeenSet() const;

                private:

                    /**
                     * Custom response header switch. Valid values: on, off.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Custom response header rule array.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<HttpHeaderPathRule> m_headerRules;
                    bool m_headerRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_RESPONSEHEADER_H_
