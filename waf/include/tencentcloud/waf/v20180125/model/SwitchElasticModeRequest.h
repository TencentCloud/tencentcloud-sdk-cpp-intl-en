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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHELASTICMODEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHELASTICMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SwitchElasticMode request structure.
                */
                class SwitchElasticModeRequest : public AbstractModel
                {
                public:
                    SwitchElasticModeRequest();
                    ~SwitchElasticModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Version, can only be sparta-waf, clb-waf, or cdn-waf
                     * @return Edition Version, can only be sparta-waf, clb-waf, or cdn-waf
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Version, can only be sparta-waf, clb-waf, or cdn-waf
                     * @param _edition Version, can only be sparta-waf, clb-waf, or cdn-waf
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取0 indicates Off; 1 indicates On
                     * @return Mode 0 indicates Off; 1 indicates On
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置0 indicates Off; 1 indicates On
                     * @param _mode 0 indicates Off; 1 indicates On
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * Version, can only be sparta-waf, clb-waf, or cdn-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 0 indicates Off; 1 indicates On
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHELASTICMODEREQUEST_H_
