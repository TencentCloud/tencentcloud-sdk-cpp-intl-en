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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBFEATURESRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBFEATURESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBFeatures response structure.
                */
                class DescribeDBFeaturesResponse : public AbstractModel
                {
                public:
                    DescribeDBFeaturesResponse();
                    ~DescribeDBFeaturesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether database audit is supported
                     * @return IsSupportAudit Whether database audit is supported
                     * 
                     */
                    bool GetIsSupportAudit() const;

                    /**
                     * 判断参数 IsSupportAudit 是否已赋值
                     * @return IsSupportAudit 是否已赋值
                     * 
                     */
                    bool IsSupportAuditHasBeenSet() const;

                    /**
                     * 获取Whether enabling audit requires a kernel version upgrade
                     * @return AuditNeedUpgrade Whether enabling audit requires a kernel version upgrade
                     * 
                     */
                    bool GetAuditNeedUpgrade() const;

                    /**
                     * 判断参数 AuditNeedUpgrade 是否已赋值
                     * @return AuditNeedUpgrade 是否已赋值
                     * 
                     */
                    bool AuditNeedUpgradeHasBeenSet() const;

                    /**
                     * 获取Whether database encryption is supported
                     * @return IsSupportEncryption Whether database encryption is supported
                     * 
                     */
                    bool GetIsSupportEncryption() const;

                    /**
                     * 判断参数 IsSupportEncryption 是否已赋值
                     * @return IsSupportEncryption 是否已赋值
                     * 
                     */
                    bool IsSupportEncryptionHasBeenSet() const;

                    /**
                     * 获取Whether enabling encryption requires a kernel version upgrade
                     * @return EncryptionNeedUpgrade Whether enabling encryption requires a kernel version upgrade
                     * 
                     */
                    bool GetEncryptionNeedUpgrade() const;

                    /**
                     * 判断参数 EncryptionNeedUpgrade 是否已赋值
                     * @return EncryptionNeedUpgrade 是否已赋值
                     * 
                     */
                    bool EncryptionNeedUpgradeHasBeenSet() const;

                    /**
                     * 获取Whether the instance is a remote read-only instance
                     * @return IsRemoteRo Whether the instance is a remote read-only instance
                     * 
                     */
                    bool GetIsRemoteRo() const;

                    /**
                     * 判断参数 IsRemoteRo 是否已赋值
                     * @return IsRemoteRo 是否已赋值
                     * 
                     */
                    bool IsRemoteRoHasBeenSet() const;

                    /**
                     * 获取Region of the source instance
                     * @return MasterRegion Region of the source instance
                     * 
                     */
                    std::string GetMasterRegion() const;

                    /**
                     * 判断参数 MasterRegion 是否已赋值
                     * @return MasterRegion 是否已赋值
                     * 
                     */
                    bool MasterRegionHasBeenSet() const;

                    /**
                     * 获取Whether minor version upgrade is supported
                     * @return IsSupportUpdateSubVersion Whether minor version upgrade is supported
                     * 
                     */
                    bool GetIsSupportUpdateSubVersion() const;

                    /**
                     * 判断参数 IsSupportUpdateSubVersion 是否已赋值
                     * @return IsSupportUpdateSubVersion 是否已赋值
                     * 
                     */
                    bool IsSupportUpdateSubVersionHasBeenSet() const;

                    /**
                     * 获取The current kernel version
                     * @return CurrentSubVersion The current kernel version
                     * 
                     */
                    std::string GetCurrentSubVersion() const;

                    /**
                     * 判断参数 CurrentSubVersion 是否已赋值
                     * @return CurrentSubVersion 是否已赋值
                     * 
                     */
                    bool CurrentSubVersionHasBeenSet() const;

                    /**
                     * 获取Available kernel version for upgrade
                     * @return TargetSubVersion Available kernel version for upgrade
                     * 
                     */
                    std::string GetTargetSubVersion() const;

                    /**
                     * 判断参数 TargetSubVersion 是否已赋值
                     * @return TargetSubVersion 是否已赋值
                     * 
                     */
                    bool TargetSubVersionHasBeenSet() const;

                private:

                    /**
                     * Whether database audit is supported
                     */
                    bool m_isSupportAudit;
                    bool m_isSupportAuditHasBeenSet;

                    /**
                     * Whether enabling audit requires a kernel version upgrade
                     */
                    bool m_auditNeedUpgrade;
                    bool m_auditNeedUpgradeHasBeenSet;

                    /**
                     * Whether database encryption is supported
                     */
                    bool m_isSupportEncryption;
                    bool m_isSupportEncryptionHasBeenSet;

                    /**
                     * Whether enabling encryption requires a kernel version upgrade
                     */
                    bool m_encryptionNeedUpgrade;
                    bool m_encryptionNeedUpgradeHasBeenSet;

                    /**
                     * Whether the instance is a remote read-only instance
                     */
                    bool m_isRemoteRo;
                    bool m_isRemoteRoHasBeenSet;

                    /**
                     * Region of the source instance
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * Whether minor version upgrade is supported
                     */
                    bool m_isSupportUpdateSubVersion;
                    bool m_isSupportUpdateSubVersionHasBeenSet;

                    /**
                     * The current kernel version
                     */
                    std::string m_currentSubVersion;
                    bool m_currentSubVersionHasBeenSet;

                    /**
                     * Available kernel version for upgrade
                     */
                    std::string m_targetSubVersion;
                    bool m_targetSubVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBFEATURESRESPONSE_H_
