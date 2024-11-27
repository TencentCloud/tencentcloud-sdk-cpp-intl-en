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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERTYPE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC configurations
                */
                class DedicatedClusterType : public AbstractModel
                {
                public:
                    DedicatedClusterType();
                    ~DedicatedClusterType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration id
                     * @return DedicatedClusterTypeId Configuration id
                     * 
                     */
                    std::string GetDedicatedClusterTypeId() const;

                    /**
                     * 设置Configuration id
                     * @param _dedicatedClusterTypeId Configuration id
                     * 
                     */
                    void SetDedicatedClusterTypeId(const std::string& _dedicatedClusterTypeId);

                    /**
                     * 判断参数 DedicatedClusterTypeId 是否已赋值
                     * @return DedicatedClusterTypeId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypeIdHasBeenSet() const;

                    /**
                     * 获取Configuration description, corresponding to description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Description Configuration description, corresponding to description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Configuration description, corresponding to description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _description Configuration description, corresponding to description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
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
                     * 获取Configuration name, corresponding to computing resource type
                     * @return Name Configuration name, corresponding to computing resource type
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Configuration name, corresponding to computing resource type
                     * @param _name Configuration name, corresponding to computing resource type
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Configuration creation time
                     * @return CreateTime Configuration creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Configuration creation time
                     * @param _createTime Configuration creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取List of supported storage types
                     * @return SupportedStorageType List of supported storage types
                     * 
                     */
                    std::vector<std::string> GetSupportedStorageType() const;

                    /**
                     * 设置List of supported storage types
                     * @param _supportedStorageType List of supported storage types
                     * 
                     */
                    void SetSupportedStorageType(const std::vector<std::string>& _supportedStorageType);

                    /**
                     * 判断参数 SupportedStorageType 是否已赋值
                     * @return SupportedStorageType 是否已赋值
                     * 
                     */
                    bool SupportedStorageTypeHasBeenSet() const;

                    /**
                     * 获取Supported uplink switch transmission rate
                     * @return SupportedUplinkGiB Supported uplink switch transmission rate
                     * 
                     */
                    std::vector<int64_t> GetSupportedUplinkGiB() const;

                    /**
                     * 设置Supported uplink switch transmission rate
                     * @param _supportedUplinkGiB Supported uplink switch transmission rate
                     * 
                     */
                    void SetSupportedUplinkGiB(const std::vector<int64_t>& _supportedUplinkGiB);

                    /**
                     * 判断参数 SupportedUplinkGiB 是否已赋值
                     * @return SupportedUplinkGiB 是否已赋值
                     * 
                     */
                    bool SupportedUplinkGiBHasBeenSet() const;

                    /**
                     * 获取List of supported instance families
                     * @return SupportedInstanceFamily List of supported instance families
                     * 
                     */
                    std::vector<std::string> GetSupportedInstanceFamily() const;

                    /**
                     * 设置List of supported instance families
                     * @param _supportedInstanceFamily List of supported instance families
                     * 
                     */
                    void SetSupportedInstanceFamily(const std::vector<std::string>& _supportedInstanceFamily);

                    /**
                     * 判断参数 SupportedInstanceFamily 是否已赋值
                     * @return SupportedInstanceFamily 是否已赋值
                     * 
                     */
                    bool SupportedInstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Floor weight capacity (KG)
                     * @return Weight Floor weight capacity (KG)
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Floor weight capacity (KG)
                     * @param _weight Floor weight capacity (KG)
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Power requirements (KW)
                     * @return PowerDrawKva Power requirements (KW)
                     * 
                     */
                    double GetPowerDrawKva() const;

                    /**
                     * 设置Power requirements (KW)
                     * @param _powerDrawKva Power requirements (KW)
                     * 
                     */
                    void SetPowerDrawKva(const double& _powerDrawKva);

                    /**
                     * 判断参数 PowerDrawKva 是否已赋值
                     * @return PowerDrawKva 是否已赋值
                     * 
                     */
                    bool PowerDrawKvaHasBeenSet() const;

                    /**
                     * 获取Displays the details of computing resource types, and does not display resources such as storage; corresponding to type
                     * @return ComputeFormatDesc Displays the details of computing resource types, and does not display resources such as storage; corresponding to type
                     * 
                     */
                    std::string GetComputeFormatDesc() const;

                    /**
                     * 设置Displays the details of computing resource types, and does not display resources such as storage; corresponding to type
                     * @param _computeFormatDesc Displays the details of computing resource types, and does not display resources such as storage; corresponding to type
                     * 
                     */
                    void SetComputeFormatDesc(const std::string& _computeFormatDesc);

                    /**
                     * 判断参数 ComputeFormatDesc 是否已赋值
                     * @return ComputeFormatDesc 是否已赋值
                     * 
                     */
                    bool ComputeFormatDescHasBeenSet() const;

                private:

                    /**
                     * Configuration id
                     */
                    std::string m_dedicatedClusterTypeId;
                    bool m_dedicatedClusterTypeIdHasBeenSet;

                    /**
                     * Configuration description, corresponding to description 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Configuration name, corresponding to computing resource type
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Configuration creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of supported storage types
                     */
                    std::vector<std::string> m_supportedStorageType;
                    bool m_supportedStorageTypeHasBeenSet;

                    /**
                     * Supported uplink switch transmission rate
                     */
                    std::vector<int64_t> m_supportedUplinkGiB;
                    bool m_supportedUplinkGiBHasBeenSet;

                    /**
                     * List of supported instance families
                     */
                    std::vector<std::string> m_supportedInstanceFamily;
                    bool m_supportedInstanceFamilyHasBeenSet;

                    /**
                     * Floor weight capacity (KG)
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Power requirements (KW)
                     */
                    double m_powerDrawKva;
                    bool m_powerDrawKvaHasBeenSet;

                    /**
                     * Displays the details of computing resource types, and does not display resources such as storage; corresponding to type
                     */
                    std::string m_computeFormatDesc;
                    bool m_computeFormatDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERTYPE_H_
