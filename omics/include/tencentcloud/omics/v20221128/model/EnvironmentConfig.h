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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTCONFIG_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/VPCOption.h>
#include <tencentcloud/omics/v20221128/model/ClusterOption.h>
#include <tencentcloud/omics/v20221128/model/DatabaseOption.h>
#include <tencentcloud/omics/v20221128/model/StorageOption.h>
#include <tencentcloud/omics/v20221128/model/CVMOption.h>
#include <tencentcloud/omics/v20221128/model/SecurityGroupOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Environment configuration
                */
                class EnvironmentConfig : public AbstractModel
                {
                public:
                    EnvironmentConfig();
                    ~EnvironmentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC configuration
                     * @return VPCOption VPC configuration
                     * 
                     */
                    VPCOption GetVPCOption() const;

                    /**
                     * 设置VPC configuration
                     * @param _vPCOption VPC configuration
                     * 
                     */
                    void SetVPCOption(const VPCOption& _vPCOption);

                    /**
                     * 判断参数 VPCOption 是否已赋值
                     * @return VPCOption 是否已赋值
                     * 
                     */
                    bool VPCOptionHasBeenSet() const;

                    /**
                     * 获取Computing cluster configuration
                     * @return ClusterOption Computing cluster configuration
                     * 
                     */
                    ClusterOption GetClusterOption() const;

                    /**
                     * 设置Computing cluster configuration
                     * @param _clusterOption Computing cluster configuration
                     * 
                     */
                    void SetClusterOption(const ClusterOption& _clusterOption);

                    /**
                     * 判断参数 ClusterOption 是否已赋值
                     * @return ClusterOption 是否已赋值
                     * 
                     */
                    bool ClusterOptionHasBeenSet() const;

                    /**
                     * 获取Database configuration
                     * @return DatabaseOption Database configuration
                     * 
                     */
                    DatabaseOption GetDatabaseOption() const;

                    /**
                     * 设置Database configuration
                     * @param _databaseOption Database configuration
                     * 
                     */
                    void SetDatabaseOption(const DatabaseOption& _databaseOption);

                    /**
                     * 判断参数 DatabaseOption 是否已赋值
                     * @return DatabaseOption 是否已赋值
                     * 
                     */
                    bool DatabaseOptionHasBeenSet() const;

                    /**
                     * 获取Storage configuration
                     * @return StorageOption Storage configuration
                     * 
                     */
                    StorageOption GetStorageOption() const;

                    /**
                     * 设置Storage configuration
                     * @param _storageOption Storage configuration
                     * 
                     */
                    void SetStorageOption(const StorageOption& _storageOption);

                    /**
                     * 判断参数 StorageOption 是否已赋值
                     * @return StorageOption 是否已赋值
                     * 
                     */
                    bool StorageOptionHasBeenSet() const;

                    /**
                     * 获取CVM configuration
                     * @return CVMOption CVM configuration
                     * 
                     */
                    CVMOption GetCVMOption() const;

                    /**
                     * 设置CVM configuration
                     * @param _cVMOption CVM configuration
                     * 
                     */
                    void SetCVMOption(const CVMOption& _cVMOption);

                    /**
                     * 判断参数 CVMOption 是否已赋值
                     * @return CVMOption 是否已赋值
                     * 
                     */
                    bool CVMOptionHasBeenSet() const;

                    /**
                     * 获取Security group configuration
                     * @return SecurityGroupOption Security group configuration
                     * 
                     */
                    SecurityGroupOption GetSecurityGroupOption() const;

                    /**
                     * 设置Security group configuration
                     * @param _securityGroupOption Security group configuration
                     * 
                     */
                    void SetSecurityGroupOption(const SecurityGroupOption& _securityGroupOption);

                    /**
                     * 判断参数 SecurityGroupOption 是否已赋值
                     * @return SecurityGroupOption 是否已赋值
                     * 
                     */
                    bool SecurityGroupOptionHasBeenSet() const;

                private:

                    /**
                     * VPC configuration
                     */
                    VPCOption m_vPCOption;
                    bool m_vPCOptionHasBeenSet;

                    /**
                     * Computing cluster configuration
                     */
                    ClusterOption m_clusterOption;
                    bool m_clusterOptionHasBeenSet;

                    /**
                     * Database configuration
                     */
                    DatabaseOption m_databaseOption;
                    bool m_databaseOptionHasBeenSet;

                    /**
                     * Storage configuration
                     */
                    StorageOption m_storageOption;
                    bool m_storageOptionHasBeenSet;

                    /**
                     * CVM configuration
                     */
                    CVMOption m_cVMOption;
                    bool m_cVMOptionHasBeenSet;

                    /**
                     * Security group configuration
                     */
                    SecurityGroupOption m_securityGroupOption;
                    bool m_securityGroupOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTCONFIG_H_
