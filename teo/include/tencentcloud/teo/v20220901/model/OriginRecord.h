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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_

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
                * Origin group record
                */
                class OriginRecord : public AbstractModel
                {
                public:
                    OriginRecord();
                    ~OriginRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     * @return Record The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     * @param _record The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     * 
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`AWS_S3`: AWS S3 bucket address
                     * @return Type The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`AWS_S3`: AWS S3 bucket address
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`AWS_S3`: AWS S3 bucket address
                     * @param _type The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`AWS_S3`: AWS S3 bucket address
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The origin record ID.
                     * @return RecordId The origin record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置The origin record ID.
                     * @param _recordId The origin record ID.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Weight of an origin. Range: 0-100. If it is not specified, a random weight is assigned. If `0` is passed in, there is no traffic scheduled to this origin.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Weight Weight of an origin. Range: 0-100. If it is not specified, a random weight is assigned. If `0` is passed in, there is no traffic scheduled to this origin.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight of an origin. Range: 0-100. If it is not specified, a random weight is assigned. If `0` is passed in, there is no traffic scheduled to this origin.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _weight Weight of an origin. Range: 0-100. If it is not specified, a random weight is assigned. If `0` is passed in, there is no traffic scheduled to this origin.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Whether to enable private authentication. It is valid when `OriginType=COS/AWS_S3`. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>Default: `false`.

                     * @return Private Whether to enable private authentication. It is valid when `OriginType=COS/AWS_S3`. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>Default: `false`.

                     * 
                     */
                    bool GetPrivate() const;

                    /**
                     * 设置Whether to enable private authentication. It is valid when `OriginType=COS/AWS_S3`. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>Default: `false`.

                     * @param _private Whether to enable private authentication. It is valid when `OriginType=COS/AWS_S3`. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>Default: `false`.

                     * 
                     */
                    void SetPrivate(const bool& _private);

                    /**
                     * 判断参数 Private 是否已赋值
                     * @return Private 是否已赋值
                     * 
                     */
                    bool PrivateHasBeenSet() const;

                    /**
                     * 获取Private authentication parameters. This field is valid when `Private=true`.
                     * @return PrivateParameters Private authentication parameters. This field is valid when `Private=true`.
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置Private authentication parameters. This field is valid when `Private=true`.
                     * @param _privateParameters Private authentication parameters. This field is valid when `Private=true`.
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
                     * The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * The origin type. Values:
<li>`IP_DOMAIN`: IPv4/IPv6 address or domain name</li>
<li>`COS`: COS bucket address</li>
<li>`AWS_S3`: AWS S3 bucket address
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The origin record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Weight of an origin. Range: 0-100. If it is not specified, a random weight is assigned. If `0` is passed in, there is no traffic scheduled to this origin.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Whether to enable private authentication. It is valid when `OriginType=COS/AWS_S3`. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>Default: `false`.

                     */
                    bool m_private;
                    bool m_privateHasBeenSet;

                    /**
                     * Private authentication parameters. This field is valid when `Private=true`.
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_
