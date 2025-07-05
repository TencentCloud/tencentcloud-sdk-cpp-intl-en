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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEIDS_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEIDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Cloud resource ID
                */
                class ResourceIds : public AbstractModel
                {
                public:
                    ResourceIds();
                    ~ResourceIds() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VPCId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVPCId() const;

                    /**
                     * 设置VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vPCId VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVPCId(const std::string& _vPCId);

                    /**
                     * 判断参数 VPCId 是否已赋值
                     * @return VPCId 是否已赋值
                     * 
                     */
                    bool VPCIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecurityGroupId Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _securityGroupId Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取TDSQL-C for MySQL database ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TDSQLCId TDSQL-C for MySQL database ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTDSQLCId() const;

                    /**
                     * 设置TDSQL-C for MySQL database ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tDSQLCId TDSQL-C for MySQL database ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTDSQLCId(const std::string& _tDSQLCId);

                    /**
                     * 判断参数 TDSQLCId 是否已赋值
                     * @return TDSQLCId 是否已赋值
                     * 
                     */
                    bool TDSQLCIdHasBeenSet() const;

                    /**
                     * 获取 CFS ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CFSId  CFS ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCFSId() const;

                    /**
                     * 设置 CFS ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cFSId  CFS ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFSId(const std::string& _cFSId);

                    /**
                     * 判断参数 CFSId 是否已赋值
                     * @return CFSId 是否已赋值
                     * 
                     */
                    bool CFSIdHasBeenSet() const;

                    /**
                     * 获取CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CFSStorageType CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCFSStorageType() const;

                    /**
                     * 设置CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cFSStorageType CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFSStorageType(const std::string& _cFSStorageType);

                    /**
                     * 判断参数 CFSStorageType 是否已赋值
                     * @return CFSStorageType 是否已赋值
                     * 
                     */
                    bool CFSStorageTypeHasBeenSet() const;

                    /**
                     * 获取 Cloud Virtual Machine ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVMId  Cloud Virtual Machine ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCVMId() const;

                    /**
                     * 设置 Cloud Virtual Machine ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cVMId  Cloud Virtual Machine ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCVMId(const std::string& _cVMId);

                    /**
                     * 判断参数 CVMId 是否已赋值
                     * @return CVMId 是否已赋值
                     * 
                     */
                    bool CVMIdHasBeenSet() const;

                    /**
                     * 获取Elastic container cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EKSId Elastic container cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEKSId() const;

                    /**
                     * 设置Elastic container cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eKSId Elastic container cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEKSId(const std::string& _eKSId);

                    /**
                     * 判断参数 EKSId 是否已赋值
                     * @return EKSId 是否已赋值
                     * 
                     */
                    bool EKSIdHasBeenSet() const;

                private:

                    /**
                     * VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vPCId;
                    bool m_vPCIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Security group ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * TDSQL-C for MySQL database ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tDSQLCId;
                    bool m_tDSQLCIdHasBeenSet;

                    /**
                     *  CFS ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cFSId;
                    bool m_cFSIdHasBeenSet;

                    /**
                     * CFS type. Valid values:
- SD: standard
- HP: high-performance
- TB: standard Turbo
- TP: high-performance Turbo
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cFSStorageType;
                    bool m_cFSStorageTypeHasBeenSet;

                    /**
                     *  Cloud Virtual Machine ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVMId;
                    bool m_cVMIdHasBeenSet;

                    /**
                     * Elastic container cluster ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eKSId;
                    bool m_eKSIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEIDS_H_
