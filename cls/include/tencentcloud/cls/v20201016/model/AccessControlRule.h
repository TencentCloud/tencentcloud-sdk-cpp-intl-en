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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ACCESSCONTROLRULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ACCESSCONTROLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DataSight Access Control Rule
                */
                class AccessControlRule : public AbstractModel
                {
                public:
                    AccessControlRule();
                    ~AccessControlRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Network segment or IP, support IPv4 or IPv6.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CidrBlocks <p>Network segment or IP, support IPv4 or IPv6.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCidrBlocks() const;

                    /**
                     * 设置<p>Network segment or IP, support IPv4 or IPv6.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cidrBlocks <p>Network segment or IP, support IPv4 or IPv6.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCidrBlocks(const std::vector<std::string>& _cidrBlocks);

                    /**
                     * 判断参数 CidrBlocks 是否已赋值
                     * @return CidrBlocks 是否已赋值
                     * 
                     */
                    bool CidrBlocksHasBeenSet() const;

                    /**
                     * 获取<p>ACCEPT or DROP.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action <p>ACCEPT or DROP.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>ACCEPT or DROP.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _action <p>ACCEPT or DROP.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Access method: public - public network, internal - private network</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessMode <p>Access method: public - public network, internal - private network</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Access method: public - public network, internal - private network</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessMode <p>Access method: public - public network, internal - private network</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                private:

                    /**
                     * <p>Network segment or IP, support IPv4 or IPv6.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_cidrBlocks;
                    bool m_cidrBlocksHasBeenSet;

                    /**
                     * <p>ACCEPT or DROP.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Access method: public - public network, internal - private network</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ACCESSCONTROLRULE_H_
