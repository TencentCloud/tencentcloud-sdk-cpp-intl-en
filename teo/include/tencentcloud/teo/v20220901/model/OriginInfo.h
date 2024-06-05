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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PrivateParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of the origin.
                */
                class OriginInfo : public AbstractModel
                {
                public:
                    OriginInfo();
                    ~OriginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
<li>VODEO: VOD on EO;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * @return OriginType The origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
<li>VODEO: VOD on EO;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置The origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
<li>VODEO: VOD on EO;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * @param _originType The origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
<li>VODEO: VOD on EO;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Origin server address, varying depending on the value of OriginType:
<li>When OriginType is IP_DOMAIN, specify this parameter with IPv4, IPv6, or domain name;</li>
<li>When OriginType is COS, specify this parameter with the COS bucket access domain name;</li>
<li>When OriginType is AWS_S3, specify this parameter with the S3 bucket access domain name;</li>
<li>When OriginType is ORIGIN_GROUP, specify this parameter with the origin group ID;</li>
<li>When OriginType is VODEO and VodeoDistributionRange is ALL, specify this parameter with "all-buckets-in-vodeo-application"; if VodeoDistributionRange is Bucket, specify this parameter with the corresponding storage bucket domain name;</li>
<li>When OriginType is LB, specify the Cloud Load Balancer instance ID. This feature is currently only available to the whitelist;</li>
<li>When OriginType is SPACE, specify this parameter with the origin shield space ID. This feature is currently only available to the whitelist.</li>
                     * @return Origin Origin server address, varying depending on the value of OriginType:
<li>When OriginType is IP_DOMAIN, specify this parameter with IPv4, IPv6, or domain name;</li>
<li>When OriginType is COS, specify this parameter with the COS bucket access domain name;</li>
<li>When OriginType is AWS_S3, specify this parameter with the S3 bucket access domain name;</li>
<li>When OriginType is ORIGIN_GROUP, specify this parameter with the origin group ID;</li>
<li>When OriginType is VODEO and VodeoDistributionRange is ALL, specify this parameter with "all-buckets-in-vodeo-application"; if VodeoDistributionRange is Bucket, specify this parameter with the corresponding storage bucket domain name;</li>
<li>When OriginType is LB, specify the Cloud Load Balancer instance ID. This feature is currently only available to the whitelist;</li>
<li>When OriginType is SPACE, specify this parameter with the origin shield space ID. This feature is currently only available to the whitelist.</li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server address, varying depending on the value of OriginType:
<li>When OriginType is IP_DOMAIN, specify this parameter with IPv4, IPv6, or domain name;</li>
<li>When OriginType is COS, specify this parameter with the COS bucket access domain name;</li>
<li>When OriginType is AWS_S3, specify this parameter with the S3 bucket access domain name;</li>
<li>When OriginType is ORIGIN_GROUP, specify this parameter with the origin group ID;</li>
<li>When OriginType is VODEO and VodeoDistributionRange is ALL, specify this parameter with "all-buckets-in-vodeo-application"; if VodeoDistributionRange is Bucket, specify this parameter with the corresponding storage bucket domain name;</li>
<li>When OriginType is LB, specify the Cloud Load Balancer instance ID. This feature is currently only available to the whitelist;</li>
<li>When OriginType is SPACE, specify this parameter with the origin shield space ID. This feature is currently only available to the whitelist.</li>
                     * @param _origin Origin server address, varying depending on the value of OriginType:
<li>When OriginType is IP_DOMAIN, specify this parameter with IPv4, IPv6, or domain name;</li>
<li>When OriginType is COS, specify this parameter with the COS bucket access domain name;</li>
<li>When OriginType is AWS_S3, specify this parameter with the S3 bucket access domain name;</li>
<li>When OriginType is ORIGIN_GROUP, specify this parameter with the origin group ID;</li>
<li>When OriginType is VODEO and VodeoDistributionRange is ALL, specify this parameter with "all-buckets-in-vodeo-application"; if VodeoDistributionRange is Bucket, specify this parameter with the corresponding storage bucket domain name;</li>
<li>When OriginType is LB, specify the Cloud Load Balancer instance ID. This feature is currently only available to the whitelist;</li>
<li>When OriginType is SPACE, specify this parameter with the origin shield space ID. This feature is currently only available to the whitelist.</li>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取The ID of the secondary origin group. This parameter is valid only when OriginType is ORIGIN_GROUP. This field indicates the old version capability, which cannot be configured or modified on the control panel after being called. Please submit a ticket if required.
                     * @return BackupOrigin The ID of the secondary origin group. This parameter is valid only when OriginType is ORIGIN_GROUP. This field indicates the old version capability, which cannot be configured or modified on the control panel after being called. Please submit a ticket if required.
                     * 
                     */
                    std::string GetBackupOrigin() const;

                    /**
                     * 设置The ID of the secondary origin group. This parameter is valid only when OriginType is ORIGIN_GROUP. This field indicates the old version capability, which cannot be configured or modified on the control panel after being called. Please submit a ticket if required.
                     * @param _backupOrigin The ID of the secondary origin group. This parameter is valid only when OriginType is ORIGIN_GROUP. This field indicates the old version capability, which cannot be configured or modified on the control panel after being called. Please submit a ticket if required.
                     * 
                     */
                    void SetBackupOrigin(const std::string& _backupOrigin);

                    /**
                     * 判断参数 BackupOrigin 是否已赋值
                     * @return BackupOrigin 是否已赋值
                     * 
                     */
                    bool BackupOriginHasBeenSet() const;

                    /**
                     * 获取Whether access to the private Cloud Object Storage origin server is allowed. This parameter is valid only when OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
If it is not specified, the default value is off.
                     * @return PrivateAccess Whether access to the private Cloud Object Storage origin server is allowed. This parameter is valid only when OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
If it is not specified, the default value is off.
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Whether access to the private Cloud Object Storage origin server is allowed. This parameter is valid only when OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
If it is not specified, the default value is off.
                     * @param _privateAccess Whether access to the private Cloud Object Storage origin server is allowed. This parameter is valid only when OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
If it is not specified, the default value is off.
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取Private authentication parameter. This parameter is valid only when PrivateAccess is on.
                     * @return PrivateParameters Private authentication parameter. This parameter is valid only when PrivateAccess is on.
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置Private authentication parameter. This parameter is valid only when PrivateAccess is on.
                     * @param _privateParameters Private authentication parameter. This parameter is valid only when PrivateAccess is on.
                     * 
                     */
                    void SetPrivateParameters(const std::vector<PrivateParameter>& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                    /**
                     * 获取VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * @return VodeoSubAppId VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * 
                     */
                    int64_t GetVodeoSubAppId() const;

                    /**
                     * 设置VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * @param _vodeoSubAppId VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * 
                     */
                    void SetVodeoSubAppId(const int64_t& _vodeoSubAppId);

                    /**
                     * 判断参数 VodeoSubAppId 是否已赋值
                     * @return VodeoSubAppId 是否已赋值
                     * 
                     */
                    bool VodeoSubAppIdHasBeenSet() const;

                    /**
                     * 获取VODEO distribution range. This parameter is required when OriginType is VODEO. Valid values:
<li>All: All storage buckets under the current application;</li>
<li>Bucket: A specified storage bucket.</li>
                     * @return VodeoDistributionRange VODEO distribution range. This parameter is required when OriginType is VODEO. Valid values:
<li>All: All storage buckets under the current application;</li>
<li>Bucket: A specified storage bucket.</li>
                     * 
                     */
                    std::string GetVodeoDistributionRange() const;

                    /**
                     * 设置VODEO distribution range. This parameter is required when OriginType is VODEO. Valid values:
<li>All: All storage buckets under the current application;</li>
<li>Bucket: A specified storage bucket.</li>
                     * @param _vodeoDistributionRange VODEO distribution range. This parameter is required when OriginType is VODEO. Valid values:
<li>All: All storage buckets under the current application;</li>
<li>Bucket: A specified storage bucket.</li>
                     * 
                     */
                    void SetVodeoDistributionRange(const std::string& _vodeoDistributionRange);

                    /**
                     * 判断参数 VodeoDistributionRange 是否已赋值
                     * @return VodeoDistributionRange 是否已赋值
                     * 
                     */
                    bool VodeoDistributionRangeHasBeenSet() const;

                    /**
                     * 获取VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * @return VodeoBucketId VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * 
                     */
                    std::string GetVodeoBucketId() const;

                    /**
                     * 设置VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * @param _vodeoBucketId VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * 
                     */
                    void SetVodeoBucketId(const std::string& _vodeoBucketId);

                    /**
                     * 判断参数 VodeoBucketId 是否已赋值
                     * @return VodeoBucketId 是否已赋值
                     * 
                     */
                    bool VodeoBucketIdHasBeenSet() const;

                private:

                    /**
                     * The origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
<li>VODEO: VOD on EO;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server address, varying depending on the value of OriginType:
<li>When OriginType is IP_DOMAIN, specify this parameter with IPv4, IPv6, or domain name;</li>
<li>When OriginType is COS, specify this parameter with the COS bucket access domain name;</li>
<li>When OriginType is AWS_S3, specify this parameter with the S3 bucket access domain name;</li>
<li>When OriginType is ORIGIN_GROUP, specify this parameter with the origin group ID;</li>
<li>When OriginType is VODEO and VodeoDistributionRange is ALL, specify this parameter with "all-buckets-in-vodeo-application"; if VodeoDistributionRange is Bucket, specify this parameter with the corresponding storage bucket domain name;</li>
<li>When OriginType is LB, specify the Cloud Load Balancer instance ID. This feature is currently only available to the whitelist;</li>
<li>When OriginType is SPACE, specify this parameter with the origin shield space ID. This feature is currently only available to the whitelist.</li>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * The ID of the secondary origin group. This parameter is valid only when OriginType is ORIGIN_GROUP. This field indicates the old version capability, which cannot be configured or modified on the control panel after being called. Please submit a ticket if required.
                     */
                    std::string m_backupOrigin;
                    bool m_backupOriginHasBeenSet;

                    /**
                     * Whether access to the private Cloud Object Storage origin server is allowed. This parameter is valid only when OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication.</li>
If it is not specified, the default value is off.
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * Private authentication parameter. This parameter is valid only when PrivateAccess is on.
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                    /**
                     * VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     */
                    int64_t m_vodeoSubAppId;
                    bool m_vodeoSubAppIdHasBeenSet;

                    /**
                     * VODEO distribution range. This parameter is required when OriginType is VODEO. Valid values:
<li>All: All storage buckets under the current application;</li>
<li>Bucket: A specified storage bucket.</li>
                     */
                    std::string m_vodeoDistributionRange;
                    bool m_vodeoDistributionRangeHasBeenSet;

                    /**
                     * VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     */
                    std::string m_vodeoBucketId;
                    bool m_vodeoBucketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_
