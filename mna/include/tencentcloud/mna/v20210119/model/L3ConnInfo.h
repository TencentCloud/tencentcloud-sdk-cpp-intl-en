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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_L3CONNINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_L3CONNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Layer 3 interconnection rule information
                */
                class L3ConnInfo : public AbstractModel
                {
                public:
                    L3ConnInfo();
                    ~L3ConnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Interconnection rule ID
                     * @return L3ConnId Interconnection rule ID
                     * 
                     */
                    std::string GetL3ConnId() const;

                    /**
                     * 设置Interconnection rule ID
                     * @param _l3ConnId Interconnection rule ID
                     * 
                     */
                    void SetL3ConnId(const std::string& _l3ConnId);

                    /**
                     * 判断参数 L3ConnId 是否已赋值
                     * @return L3ConnId 是否已赋值
                     * 
                     */
                    bool L3ConnIdHasBeenSet() const;

                    /**
                     * 获取interworking device ID
                     * @return DeviceId1 interworking device ID
                     * 
                     */
                    std::string GetDeviceId1() const;

                    /**
                     * 设置interworking device ID
                     * @param _deviceId1 interworking device ID
                     * 
                     */
                    void SetDeviceId1(const std::string& _deviceId1);

                    /**
                     * 判断参数 DeviceId1 是否已赋值
                     * @return DeviceId1 是否已赋值
                     * 
                     */
                    bool DeviceId1HasBeenSet() const;

                    /**
                     * 获取Interconnection rule CIDR
                     * @return Cidr1 Interconnection rule CIDR
                     * 
                     */
                    std::string GetCidr1() const;

                    /**
                     * 设置Interconnection rule CIDR
                     * @param _cidr1 Interconnection rule CIDR
                     * 
                     */
                    void SetCidr1(const std::string& _cidr1);

                    /**
                     * 判断参数 Cidr1 是否已赋值
                     * @return Cidr1 是否已赋值
                     * 
                     */
                    bool Cidr1HasBeenSet() const;

                    /**
                     * 获取interworking device ID
                     * @return DeviceId2 interworking device ID
                     * 
                     */
                    std::string GetDeviceId2() const;

                    /**
                     * 设置interworking device ID
                     * @param _deviceId2 interworking device ID
                     * 
                     */
                    void SetDeviceId2(const std::string& _deviceId2);

                    /**
                     * 判断参数 DeviceId2 是否已赋值
                     * @return DeviceId2 是否已赋值
                     * 
                     */
                    bool DeviceId2HasBeenSet() const;

                    /**
                     * 获取Interconnection rule CIDR
                     * @return Cidr2 Interconnection rule CIDR
                     * 
                     */
                    std::string GetCidr2() const;

                    /**
                     * 设置Interconnection rule CIDR
                     * @param _cidr2 Interconnection rule CIDR
                     * 
                     */
                    void SetCidr2(const std::string& _cidr2);

                    /**
                     * 判断参数 Cidr2 是否已赋值
                     * @return Cidr2 是否已赋值
                     * 
                     */
                    bool Cidr2HasBeenSet() const;

                    /**
                     * 获取Rule Enable Status
                     * @return Enable Rule Enable Status
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Rule Enable Status
                     * @param _enable Rule Enable Status
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Interconnection rule description
                     * @return Description Interconnection rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Interconnection rule description
                     * @param _description Interconnection rule description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Interconnection rule ID
                     */
                    std::string m_l3ConnId;
                    bool m_l3ConnIdHasBeenSet;

                    /**
                     * interworking device ID
                     */
                    std::string m_deviceId1;
                    bool m_deviceId1HasBeenSet;

                    /**
                     * Interconnection rule CIDR
                     */
                    std::string m_cidr1;
                    bool m_cidr1HasBeenSet;

                    /**
                     * interworking device ID
                     */
                    std::string m_deviceId2;
                    bool m_deviceId2HasBeenSet;

                    /**
                     * Interconnection rule CIDR
                     */
                    std::string m_cidr2;
                    bool m_cidr2HasBeenSet;

                    /**
                     * Rule Enable Status
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Interconnection rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_L3CONNINFO_H_
