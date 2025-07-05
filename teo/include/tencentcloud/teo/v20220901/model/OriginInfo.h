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
                     * 获取Origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
 <li>VOD: Video on Demand;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * @return OriginType Origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
 <li>VOD: Video on Demand;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
 <li>VOD: Video on Demand;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * @param _originType Origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
 <li>VOD: Video on Demand;</li>
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
                     * 获取Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IP_DOMAIN, fill in an IPv4 address, an IPv6 address, or a domain name;</li>
<li>When OriginType = COS, fill in the access domain name of the COS bucket;</li>
<li>When OriginType = AWS_S3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = ORIGIN_GROUP, fill in the origin server group ID;</li>
<li>When OriginType = VOD, fill in the VOD application ID;</li>
<li>When OriginType = LB, fill in the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist;</li>
<li>When OriginType = SPACE, fill in the origin server uninstallation space ID. This feature is currently only available to the allowlist.</li>
                     * @return Origin Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IP_DOMAIN, fill in an IPv4 address, an IPv6 address, or a domain name;</li>
<li>When OriginType = COS, fill in the access domain name of the COS bucket;</li>
<li>When OriginType = AWS_S3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = ORIGIN_GROUP, fill in the origin server group ID;</li>
<li>When OriginType = VOD, fill in the VOD application ID;</li>
<li>When OriginType = LB, fill in the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist;</li>
<li>When OriginType = SPACE, fill in the origin server uninstallation space ID. This feature is currently only available to the allowlist.</li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IP_DOMAIN, fill in an IPv4 address, an IPv6 address, or a domain name;</li>
<li>When OriginType = COS, fill in the access domain name of the COS bucket;</li>
<li>When OriginType = AWS_S3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = ORIGIN_GROUP, fill in the origin server group ID;</li>
<li>When OriginType = VOD, fill in the VOD application ID;</li>
<li>When OriginType = LB, fill in the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist;</li>
<li>When OriginType = SPACE, fill in the origin server uninstallation space ID. This feature is currently only available to the allowlist.</li>
                     * @param _origin Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IP_DOMAIN, fill in an IPv4 address, an IPv6 address, or a domain name;</li>
<li>When OriginType = COS, fill in the access domain name of the COS bucket;</li>
<li>When OriginType = AWS_S3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = ORIGIN_GROUP, fill in the origin server group ID;</li>
<li>When OriginType = VOD, fill in the VOD application ID;</li>
<li>When OriginType = LB, fill in the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist;</li>
<li>When OriginType = SPACE, fill in the origin server uninstallation space ID. This feature is currently only available to the allowlist.</li>
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
                     * 获取Custom origin server HOST header. this parameter is valid only when OriginType=IP_DOMAIN.If the OriginType is another type of origin, this parameter does not need to be passed in, otherwise an error will be reported.
If OriginType is COS or AWS_S3, the HOST header for origin-pull will remain consistent with the origin server domain name.
If OriginType is ORIGIN_GROUP, the HOST header follows the ORIGIN site GROUP configuration. if not configured, it defaults to the acceleration domain name.
If OriginType is VOD or SPACE, no configuration is required for this header, and the domain name takes effect based on the corresponding origin.
                     * @return HostHeader Custom origin server HOST header. this parameter is valid only when OriginType=IP_DOMAIN.If the OriginType is another type of origin, this parameter does not need to be passed in, otherwise an error will be reported.
If OriginType is COS or AWS_S3, the HOST header for origin-pull will remain consistent with the origin server domain name.
If OriginType is ORIGIN_GROUP, the HOST header follows the ORIGIN site GROUP configuration. if not configured, it defaults to the acceleration domain name.
If OriginType is VOD or SPACE, no configuration is required for this header, and the domain name takes effect based on the corresponding origin.
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置Custom origin server HOST header. this parameter is valid only when OriginType=IP_DOMAIN.If the OriginType is another type of origin, this parameter does not need to be passed in, otherwise an error will be reported.
If OriginType is COS or AWS_S3, the HOST header for origin-pull will remain consistent with the origin server domain name.
If OriginType is ORIGIN_GROUP, the HOST header follows the ORIGIN site GROUP configuration. if not configured, it defaults to the acceleration domain name.
If OriginType is VOD or SPACE, no configuration is required for this header, and the domain name takes effect based on the corresponding origin.
                     * @param _hostHeader Custom origin server HOST header. this parameter is valid only when OriginType=IP_DOMAIN.If the OriginType is another type of origin, this parameter does not need to be passed in, otherwise an error will be reported.
If OriginType is COS or AWS_S3, the HOST header for origin-pull will remain consistent with the origin server domain name.
If OriginType is ORIGIN_GROUP, the HOST header follows the ORIGIN site GROUP configuration. if not configured, it defaults to the acceleration domain name.
If OriginType is VOD or SPACE, no configuration is required for this header, and the domain name takes effect based on the corresponding origin.
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                    /**
                     * 获取VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * @return VodeoSubAppId VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * @deprecated
                     */
                    int64_t GetVodeoSubAppId() const;

                    /**
                     * 设置VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * @param _vodeoSubAppId VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     * @deprecated
                     */
                    void SetVodeoSubAppId(const int64_t& _vodeoSubAppId);

                    /**
                     * 判断参数 VodeoSubAppId 是否已赋值
                     * @return VodeoSubAppId 是否已赋值
                     * @deprecated
                     */
                    bool VodeoSubAppIdHasBeenSet() const;

                    /**
                     * 获取VOD on EO distribution range. This parameter is required when OriginType = VODEO. The values are: 
<li>All: all buckets under the current application;</li> 
<li>Bucket: a specified bucket.</li>
                     * @return VodeoDistributionRange VOD on EO distribution range. This parameter is required when OriginType = VODEO. The values are: 
<li>All: all buckets under the current application;</li> 
<li>Bucket: a specified bucket.</li>
                     * @deprecated
                     */
                    std::string GetVodeoDistributionRange() const;

                    /**
                     * 设置VOD on EO distribution range. This parameter is required when OriginType = VODEO. The values are: 
<li>All: all buckets under the current application;</li> 
<li>Bucket: a specified bucket.</li>
                     * @param _vodeoDistributionRange VOD on EO distribution range. This parameter is required when OriginType = VODEO. The values are: 
<li>All: all buckets under the current application;</li> 
<li>Bucket: a specified bucket.</li>
                     * @deprecated
                     */
                    void SetVodeoDistributionRange(const std::string& _vodeoDistributionRange);

                    /**
                     * 判断参数 VodeoDistributionRange 是否已赋值
                     * @return VodeoDistributionRange 是否已赋值
                     * @deprecated
                     */
                    bool VodeoDistributionRangeHasBeenSet() const;

                    /**
                     * 获取VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * @return VodeoBucketId VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * @deprecated
                     */
                    std::string GetVodeoBucketId() const;

                    /**
                     * 设置VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * @param _vodeoBucketId VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     * @deprecated
                     */
                    void SetVodeoBucketId(const std::string& _vodeoBucketId);

                    /**
                     * 判断参数 VodeoBucketId 是否已赋值
                     * @return VodeoBucketId 是否已赋值
                     * @deprecated
                     */
                    bool VodeoBucketIdHasBeenSet() const;

                    /**
                     * 获取VOD origin-pull scope. this parameter is valid only when OriginType = VOD. valid values: <li>all: all files in the VOD application corresponding to the current origin server. the default value is all;</li> <li>bucket: files in a specified bucket under the VOD application corresponding to the current origin server. specify the bucket by the parameter VodBucketId.</li>.
</li>
                     * @return VodOriginScope VOD origin-pull scope. this parameter is valid only when OriginType = VOD. valid values: <li>all: all files in the VOD application corresponding to the current origin server. the default value is all;</li> <li>bucket: files in a specified bucket under the VOD application corresponding to the current origin server. specify the bucket by the parameter VodBucketId.</li>.
</li>
                     * 
                     */
                    std::string GetVodOriginScope() const;

                    /**
                     * 设置VOD origin-pull scope. this parameter is valid only when OriginType = VOD. valid values: <li>all: all files in the VOD application corresponding to the current origin server. the default value is all;</li> <li>bucket: files in a specified bucket under the VOD application corresponding to the current origin server. specify the bucket by the parameter VodBucketId.</li>.
</li>
                     * @param _vodOriginScope VOD origin-pull scope. this parameter is valid only when OriginType = VOD. valid values: <li>all: all files in the VOD application corresponding to the current origin server. the default value is all;</li> <li>bucket: files in a specified bucket under the VOD application corresponding to the current origin server. specify the bucket by the parameter VodBucketId.</li>.
</li>
                     * 
                     */
                    void SetVodOriginScope(const std::string& _vodOriginScope);

                    /**
                     * 判断参数 VodOriginScope 是否已赋值
                     * @return VodOriginScope 是否已赋值
                     * 
                     */
                    bool VodOriginScopeHasBeenSet() const;

                    /**
                     * 获取VOD bucket ID. this parameter is required when OriginType = VOD and VodOriginScope = bucket. data source: storage ID of the bucket under the VOD professional edition application.
                     * @return VodBucketId VOD bucket ID. this parameter is required when OriginType = VOD and VodOriginScope = bucket. data source: storage ID of the bucket under the VOD professional edition application.
                     * 
                     */
                    std::string GetVodBucketId() const;

                    /**
                     * 设置VOD bucket ID. this parameter is required when OriginType = VOD and VodOriginScope = bucket. data source: storage ID of the bucket under the VOD professional edition application.
                     * @param _vodBucketId VOD bucket ID. this parameter is required when OriginType = VOD and VodOriginScope = bucket. data source: storage ID of the bucket under the VOD professional edition application.
                     * 
                     */
                    void SetVodBucketId(const std::string& _vodBucketId);

                    /**
                     * 判断参数 VodBucketId 是否已赋值
                     * @return VodBucketId 是否已赋值
                     * 
                     */
                    bool VodBucketIdHasBeenSet() const;

                private:

                    /**
                     * Origin server type, with values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name type origin server;</li>
<li>COS: Tencent Cloud COS origin server;</li>
<li>AWS_S3: AWS S3 origin server;</li>
<li>ORIGIN_GROUP: origin server group type origin server;</li>
 <li>VOD: Video on Demand;</li>
<li>SPACE: origin server uninstallation. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server address, which varies according to the value of OriginType:
<li>When OriginType = IP_DOMAIN, fill in an IPv4 address, an IPv6 address, or a domain name;</li>
<li>When OriginType = COS, fill in the access domain name of the COS bucket;</li>
<li>When OriginType = AWS_S3, fill in the access domain name of the S3 bucket;</li>
<li>When OriginType = ORIGIN_GROUP, fill in the origin server group ID;</li>
<li>When OriginType = VOD, fill in the VOD application ID;</li>
<li>When OriginType = LB, fill in the Cloud Load Balancer instance ID. This feature is currently only available to the allowlist;</li>
<li>When OriginType = SPACE, fill in the origin server uninstallation space ID. This feature is currently only available to the allowlist.</li>
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
                     * Custom origin server HOST header. this parameter is valid only when OriginType=IP_DOMAIN.If the OriginType is another type of origin, this parameter does not need to be passed in, otherwise an error will be reported.
If OriginType is COS or AWS_S3, the HOST header for origin-pull will remain consistent with the origin server domain name.
If OriginType is ORIGIN_GROUP, the HOST header follows the ORIGIN site GROUP configuration. if not configured, it defaults to the acceleration domain name.
If OriginType is VOD or SPACE, no configuration is required for this header, and the domain name takes effect based on the corresponding origin.
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * VODEO sub-application ID. This parameter is required when OriginType is VODEO.
                     */
                    int64_t m_vodeoSubAppId;
                    bool m_vodeoSubAppIdHasBeenSet;

                    /**
                     * VOD on EO distribution range. This parameter is required when OriginType = VODEO. The values are: 
<li>All: all buckets under the current application;</li> 
<li>Bucket: a specified bucket.</li>
                     */
                    std::string m_vodeoDistributionRange;
                    bool m_vodeoDistributionRangeHasBeenSet;

                    /**
                     * VODEO storage bucket ID. This parameter is required when OriginType is VODEO and VodeoDistributionRange is Bucket.
                     */
                    std::string m_vodeoBucketId;
                    bool m_vodeoBucketIdHasBeenSet;

                    /**
                     * VOD origin-pull scope. this parameter is valid only when OriginType = VOD. valid values: <li>all: all files in the VOD application corresponding to the current origin server. the default value is all;</li> <li>bucket: files in a specified bucket under the VOD application corresponding to the current origin server. specify the bucket by the parameter VodBucketId.</li>.
</li>
                     */
                    std::string m_vodOriginScope;
                    bool m_vodOriginScopeHasBeenSet;

                    /**
                     * VOD bucket ID. this parameter is required when OriginType = VOD and VodOriginScope = bucket. data source: storage ID of the bucket under the VOD professional edition application.
                     */
                    std::string m_vodBucketId;
                    bool m_vodBucketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_
