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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBOPERATEPROTECTINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBOPERATEPROTECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Operation protection information of cloud load balancer.
                */
                class LBOperateProtectInfo : public AbstractModel
                {
                public:
                    LBOperateProtectInfo();
                    ~LBOperateProtectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB instance ID.
                     * @return LoadBalancerId CLB instance ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID.
                     * @param _loadBalancerId CLB instance ID.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Protected status. true means operation protection is enabled. false means operation protection is disabled.
                     * @return ProtectState Protected status. true means operation protection is enabled. false means operation protection is disabled.
                     * 
                     */
                    bool GetProtectState() const;

                    /**
                     * 设置Protected status. true means operation protection is enabled. false means operation protection is disabled.
                     * @param _protectState Protected status. true means operation protection is enabled. false means operation protection is disabled.
                     * 
                     */
                    void SetProtectState(const bool& _protectState);

                    /**
                     * 判断参数 ProtectState 是否已赋值
                     * @return ProtectState 是否已赋值
                     * 
                     */
                    bool ProtectStateHasBeenSet() const;

                    /**
                     * 获取Specifies the uin for operation protection setting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperatorUin Specifies the uin for operation protection setting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置Specifies the uin for operation protection setting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operatorUin Specifies the uin for operation protection setting.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取Specifies the description when setting operation protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Specifies the description when setting operation protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Specifies the description when setting operation protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Specifies the description when setting operation protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Specifies the last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Specifies the last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Specifies the last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Specifies the last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Protected status. true means operation protection is enabled. false means operation protection is disabled.
                     */
                    bool m_protectState;
                    bool m_protectStateHasBeenSet;

                    /**
                     * Specifies the uin for operation protection setting.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * Specifies the description when setting operation protection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Specifies the last modification time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBOPERATEPROTECTINFO_H_
