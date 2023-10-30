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
                     * 获取The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`ORIGIN_GROUP`: Origin group</li>
<li>`AWS_S3`: AWS S3 bucket address</li>
<li>`LB`: Tencent Cloud CLB instance</li>
<li>`SPACE`: EdgeOne Shield Space</li>
                     * @return OriginType The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`ORIGIN_GROUP`: Origin group</li>
<li>`AWS_S3`: AWS S3 bucket address</li>
<li>`LB`: Tencent Cloud CLB instance</li>
<li>`SPACE`: EdgeOne Shield Space</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`ORIGIN_GROUP`: Origin group</li>
<li>`AWS_S3`: AWS S3 bucket address</li>
<li>`LB`: Tencent Cloud CLB instance</li>
<li>`SPACE`: EdgeOne Shield Space</li>
                     * @param _originType The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`ORIGIN_GROUP`: Origin group</li>
<li>`AWS_S3`: AWS S3 bucket address</li>
<li>`LB`: Tencent Cloud CLB instance</li>
<li>`SPACE`: EdgeOne Shield Space</li>
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
                     * 获取The origin address. Enter the origin group ID if `OriginType=ORIGIN_GROUP`.
                     * @return Origin The origin address. Enter the origin group ID if `OriginType=ORIGIN_GROUP`.
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置The origin address. Enter the origin group ID if `OriginType=ORIGIN_GROUP`.
                     * @param _origin The origin address. Enter the origin group ID if `OriginType=ORIGIN_GROUP`.
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
                     * 获取ID of the backup origin group (valid when `OriginType=ORIGIN_GROUP`). If it’s not specified, it indicates not to use backup origins.
                     * @return BackupOrigin ID of the backup origin group (valid when `OriginType=ORIGIN_GROUP`). If it’s not specified, it indicates not to use backup origins.
                     * 
                     */
                    std::string GetBackupOrigin() const;

                    /**
                     * 设置ID of the backup origin group (valid when `OriginType=ORIGIN_GROUP`). If it’s not specified, it indicates not to use backup origins.
                     * @param _backupOrigin ID of the backup origin group (valid when `OriginType=ORIGIN_GROUP`). If it’s not specified, it indicates not to use backup origins.
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
                     * 获取Whether to allow access to the private object storage origin (valid when `OriginType=COS/AWS_S3`). Values:
u200c<li>`on`: Enable private authentication.</li>
<li>`off`: (Default) Disable private authentication.</li>
                     * @return PrivateAccess Whether to allow access to the private object storage origin (valid when `OriginType=COS/AWS_S3`). Values:
u200c<li>`on`: Enable private authentication.</li>
<li>`off`: (Default) Disable private authentication.</li>
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置Whether to allow access to the private object storage origin (valid when `OriginType=COS/AWS_S3`). Values:
u200c<li>`on`: Enable private authentication.</li>
<li>`off`: (Default) Disable private authentication.</li>
                     * @param _privateAccess Whether to allow access to the private object storage origin (valid when `OriginType=COS/AWS_S3`). Values:
u200c<li>`on`: Enable private authentication.</li>
<li>`off`: (Default) Disable private authentication.</li>
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
                     * 获取The private authentication parameters. This field is valid when `PrivateAccess=on`.
                     * @return PrivateParameters The private authentication parameters. This field is valid when `PrivateAccess=on`.
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置The private authentication parameters. This field is valid when `PrivateAccess=on`.
                     * @param _privateParameters The private authentication parameters. This field is valid when `PrivateAccess=on`.
                     * 
                     */
                    void SetPrivateParameters(const std::vector<PrivateParameter>& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                private:

                    /**
                     * The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`ORIGIN_GROUP`: Origin group</li>
<li>`AWS_S3`: AWS S3 bucket address</li>
<li>`LB`: Tencent Cloud CLB instance</li>
<li>`SPACE`: EdgeOne Shield Space</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * The origin address. Enter the origin group ID if `OriginType=ORIGIN_GROUP`.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * ID of the backup origin group (valid when `OriginType=ORIGIN_GROUP`). If it’s not specified, it indicates not to use backup origins.
                     */
                    std::string m_backupOrigin;
                    bool m_backupOriginHasBeenSet;

                    /**
                     * Whether to allow access to the private object storage origin (valid when `OriginType=COS/AWS_S3`). Values:
u200c<li>`on`: Enable private authentication.</li>
<li>`off`: (Default) Disable private authentication.</li>
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * The private authentication parameters. This field is valid when `PrivateAccess=on`.
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_
