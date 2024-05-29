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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINDETAIL_H_

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
                class OriginDetail : public AbstractModel
                {
                public:
                    OriginDetail();
                    ~OriginDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server type. Valid values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name-typed origin servers;</li>
<li>COS: Tencent Cloud COS origin servers;</li>
<li>AWS_S3: AWS S3 object storage origin servers;</li>
<li>ORIGIN_GROUP: origin server group-typed origin servers;</li>
<li>VODEO: Cloud VOD (Hybrid Cloud Edition);</li>
<li>SPACE: uninstalling origin servers. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * @return OriginType Origin server type. Valid values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name-typed origin servers;</li>
<li>COS: Tencent Cloud COS origin servers;</li>
<li>AWS_S3: AWS S3 object storage origin servers;</li>
<li>ORIGIN_GROUP: origin server group-typed origin servers;</li>
<li>VODEO: Cloud VOD (Hybrid Cloud Edition);</li>
<li>SPACE: uninstalling origin servers. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type. Valid values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name-typed origin servers;</li>
<li>COS: Tencent Cloud COS origin servers;</li>
<li>AWS_S3: AWS S3 object storage origin servers;</li>
<li>ORIGIN_GROUP: origin server group-typed origin servers;</li>
<li>VODEO: Cloud VOD (Hybrid Cloud Edition);</li>
<li>SPACE: uninstalling origin servers. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     * @param _originType Origin server type. Valid values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name-typed origin servers;</li>
<li>COS: Tencent Cloud COS origin servers;</li>
<li>AWS_S3: AWS S3 object storage origin servers;</li>
<li>ORIGIN_GROUP: origin server group-typed origin servers;</li>
<li>VODEO: Cloud VOD (Hybrid Cloud Edition);</li>
<li>SPACE: uninstalling origin servers. Currently only available to the allowlist;</li>
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
<li>For OriginType = IP_DOMAIN, this parameter is an IPv4, IPv6 address or domain name;</li>
<li>For OriginType = COS, this parameter is the access domain name of the COS bucket;</li>
<li>For OriginType = AWS_S3, this parameter is the access domain name of the S3 bucket;</li>
<li>For OriginType = ORIGIN_GROUP, this parameter is the origin server group ID;</li>
<li>When OriginType = VODEO, if VodeoDistributionRange = ALL, then this parameter is "all-buckets-in-vodeo-application"; if VodeoDistributionRange = Bucket, then this parameter is the domain name of the corresponding bucket. </li>
                     * @return Origin Origin server address, which varies according to the value of OriginType:
<li>For OriginType = IP_DOMAIN, this parameter is an IPv4, IPv6 address or domain name;</li>
<li>For OriginType = COS, this parameter is the access domain name of the COS bucket;</li>
<li>For OriginType = AWS_S3, this parameter is the access domain name of the S3 bucket;</li>
<li>For OriginType = ORIGIN_GROUP, this parameter is the origin server group ID;</li>
<li>When OriginType = VODEO, if VodeoDistributionRange = ALL, then this parameter is "all-buckets-in-vodeo-application"; if VodeoDistributionRange = Bucket, then this parameter is the domain name of the corresponding bucket. </li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server address, which varies according to the value of OriginType:
<li>For OriginType = IP_DOMAIN, this parameter is an IPv4, IPv6 address or domain name;</li>
<li>For OriginType = COS, this parameter is the access domain name of the COS bucket;</li>
<li>For OriginType = AWS_S3, this parameter is the access domain name of the S3 bucket;</li>
<li>For OriginType = ORIGIN_GROUP, this parameter is the origin server group ID;</li>
<li>When OriginType = VODEO, if VodeoDistributionRange = ALL, then this parameter is "all-buckets-in-vodeo-application"; if VodeoDistributionRange = Bucket, then this parameter is the domain name of the corresponding bucket. </li>
                     * @param _origin Origin server address, which varies according to the value of OriginType:
<li>For OriginType = IP_DOMAIN, this parameter is an IPv4, IPv6 address or domain name;</li>
<li>For OriginType = COS, this parameter is the access domain name of the COS bucket;</li>
<li>For OriginType = AWS_S3, this parameter is the access domain name of the S3 bucket;</li>
<li>For OriginType = ORIGIN_GROUP, this parameter is the origin server group ID;</li>
<li>When OriginType = VODEO, if VodeoDistributionRange = ALL, then this parameter is "all-buckets-in-vodeo-application"; if VodeoDistributionRange = Bucket, then this parameter is the domain name of the corresponding bucket. </li>
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
                     * 获取Secondary origin group ID. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     * @return BackupOrigin Secondary origin group ID. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     * 
                     */
                    std::string GetBackupOrigin() const;

                    /**
                     * 设置Secondary origin group ID. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     * @param _backupOrigin Secondary origin group ID. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
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
                     * 获取Primary origin group name. This parameter returns a value when OriginType is ORIGIN_GROUP.
                     * @return OriginGroupName Primary origin group name. This parameter returns a value when OriginType is ORIGIN_GROUP.
                     * 
                     */
                    std::string GetOriginGroupName() const;

                    /**
                     * 设置Primary origin group name. This parameter returns a value when OriginType is ORIGIN_GROUP.
                     * @param _originGroupName Primary origin group name. This parameter returns a value when OriginType is ORIGIN_GROUP.
                     * 
                     */
                    void SetOriginGroupName(const std::string& _originGroupName);

                    /**
                     * 判断参数 OriginGroupName 是否已赋值
                     * @return OriginGroupName 是否已赋值
                     * 
                     */
                    bool OriginGroupNameHasBeenSet() const;

                    /**
                     * 获取Secondary origin group name. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     * @return BackOriginGroupName Secondary origin group name. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     * 
                     */
                    std::string GetBackOriginGroupName() const;

                    /**
                     * 设置Secondary origin group name. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     * @param _backOriginGroupName Secondary origin group name. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     * 
                     */
                    void SetBackOriginGroupName(const std::string& _backOriginGroupName);

                    /**
                     * 判断参数 BackOriginGroupName 是否已赋值
                     * @return BackOriginGroupName 是否已赋值
                     * 
                     */
                    bool BackOriginGroupNameHasBeenSet() const;

                    /**
                     * 获取Whether access to the private object storage origin server is allowed. This parameter is valid only when the origin server type OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
If this field is not specified, the default value 'off' will be used.
                     * @return PrivateAccess Whether access to the private object storage origin server is allowed. This parameter is valid only when the origin server type OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
If this field is not specified, the default value 'off' will be used.
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Whether access to the private object storage origin server is allowed. This parameter is valid only when the origin server type OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
If this field is not specified, the default value 'off' will be used.
                     * @param _privateAccess Whether access to the private object storage origin server is allowed. This parameter is valid only when the origin server type OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
If this field is not specified, the default value 'off' will be used.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateParameters Private authentication parameter. This parameter is valid only when PrivateAccess is on.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置Private authentication parameter. This parameter is valid only when PrivateAccess is on.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privateParameters Private authentication parameter. This parameter is valid only when PrivateAccess is on.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取MO sub-application ID
                     * @return VodeoSubAppId MO sub-application ID
                     * 
                     */
                    int64_t GetVodeoSubAppId() const;

                    /**
                     * 设置MO sub-application ID
                     * @param _vodeoSubAppId MO sub-application ID
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
                     * 获取MO distribution range. Valid values: <li>All: all</li> <li>Bucket: bucket</li>
                     * @return VodeoDistributionRange MO distribution range. Valid values: <li>All: all</li> <li>Bucket: bucket</li>
                     * 
                     */
                    std::string GetVodeoDistributionRange() const;

                    /**
                     * 设置MO distribution range. Valid values: <li>All: all</li> <li>Bucket: bucket</li>
                     * @param _vodeoDistributionRange MO distribution range. Valid values: <li>All: all</li> <li>Bucket: bucket</li>
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
                     * 获取MO bucket ID, required when the distribution range (DistributionRange) is bucket (Bucket)
                     * @return VodeoBucketId MO bucket ID, required when the distribution range (DistributionRange) is bucket (Bucket)
                     * 
                     */
                    std::string GetVodeoBucketId() const;

                    /**
                     * 设置MO bucket ID, required when the distribution range (DistributionRange) is bucket (Bucket)
                     * @param _vodeoBucketId MO bucket ID, required when the distribution range (DistributionRange) is bucket (Bucket)
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
                     * Origin server type. Valid values:
<li>IP_DOMAIN: IPv4, IPv6, or domain name-typed origin servers;</li>
<li>COS: Tencent Cloud COS origin servers;</li>
<li>AWS_S3: AWS S3 object storage origin servers;</li>
<li>ORIGIN_GROUP: origin server group-typed origin servers;</li>
<li>VODEO: Cloud VOD (Hybrid Cloud Edition);</li>
<li>SPACE: uninstalling origin servers. Currently only available to the allowlist;</li>
<li>LB: load balancing. Currently only available to the allowlist. </li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server address, which varies according to the value of OriginType:
<li>For OriginType = IP_DOMAIN, this parameter is an IPv4, IPv6 address or domain name;</li>
<li>For OriginType = COS, this parameter is the access domain name of the COS bucket;</li>
<li>For OriginType = AWS_S3, this parameter is the access domain name of the S3 bucket;</li>
<li>For OriginType = ORIGIN_GROUP, this parameter is the origin server group ID;</li>
<li>When OriginType = VODEO, if VodeoDistributionRange = ALL, then this parameter is "all-buckets-in-vodeo-application"; if VodeoDistributionRange = Bucket, then this parameter is the domain name of the corresponding bucket. </li>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Secondary origin group ID. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     */
                    std::string m_backupOrigin;
                    bool m_backupOriginHasBeenSet;

                    /**
                     * Primary origin group name. This parameter returns a value when OriginType is ORIGIN_GROUP.
                     */
                    std::string m_originGroupName;
                    bool m_originGroupNameHasBeenSet;

                    /**
                     * Secondary origin group name. This parameter is valid only when OriginType is ORIGIN_GROUP and a secondary origin group is configured.
                     */
                    std::string m_backOriginGroupName;
                    bool m_backOriginGroupNameHasBeenSet;

                    /**
                     * Whether access to the private object storage origin server is allowed. This parameter is valid only when the origin server type OriginType is COS or AWS_S3. Valid values:
<li>on: Enable private authentication;</li>
<li>off: Disable private authentication. </li>
If this field is not specified, the default value 'off' will be used.
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * Private authentication parameter. This parameter is valid only when PrivateAccess is on.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                    /**
                     * MO sub-application ID
                     */
                    int64_t m_vodeoSubAppId;
                    bool m_vodeoSubAppIdHasBeenSet;

                    /**
                     * MO distribution range. Valid values: <li>All: all</li> <li>Bucket: bucket</li>
                     */
                    std::string m_vodeoDistributionRange;
                    bool m_vodeoDistributionRangeHasBeenSet;

                    /**
                     * MO bucket ID, required when the distribution range (DistributionRange) is bucket (Bucket)
                     */
                    std::string m_vodeoBucketId;
                    bool m_vodeoBucketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINDETAIL_H_
