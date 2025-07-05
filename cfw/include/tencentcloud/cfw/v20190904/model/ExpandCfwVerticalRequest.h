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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_EXPANDCFWVERTICALREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_EXPANDCFWVERTICALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ExpandCfwVertical request structure.
                */
                class ExpandCfwVerticalRequest : public AbstractModel
                {
                public:
                    ExpandCfwVerticalRequest();
                    ~ExpandCfwVerticalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取nat: NAT firewall, ew: east-west firewall
                     * @return FwType nat: NAT firewall, ew: east-west firewall
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置nat: NAT firewall, ew: east-west firewall
                     * @param _fwType nat: NAT firewall, ew: east-west firewall
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取Bandwidth value
                     * @return Width Bandwidth value
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Bandwidth value
                     * @param _width Bandwidth value
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Firewall instance ID
                     * @return CfwInstance Firewall instance ID
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置Firewall instance ID
                     * @param _cfwInstance Firewall instance ID
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                private:

                    /**
                     * nat: NAT firewall, ew: east-west firewall
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * Bandwidth value
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Firewall instance ID
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_EXPANDCFWVERTICALREQUEST_H_
