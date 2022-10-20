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
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     * @param Record The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取The origin record ID.
                     * @return RecordId The origin record ID.
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置The origin record ID.
                     * @param RecordId The origin record ID.
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取The origin port. Value rang: 1-65535.
                     * @return Port The origin port. Value rang: 1-65535.
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置The origin port. Value rang: 1-65535.
                     * @param Port The origin port. Value rang: 1-65535.
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取The weight when `ConfigurationType=weight`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins in a group should be 100, indicating that origin-pull is performed by weight.
The weight when `ConfigurationType=proto`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins with the same protocol in a group should be 100, indicating that origin-pull is performed by weight.
                     * @return Weight The weight when `ConfigurationType=weight`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins in a group should be 100, indicating that origin-pull is performed by weight.
The weight when `ConfigurationType=proto`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins with the same protocol in a group should be 100, indicating that origin-pull is performed by weight.
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置The weight when `ConfigurationType=weight`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins in a group should be 100, indicating that origin-pull is performed by weight.
The weight when `ConfigurationType=proto`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins with the same protocol in a group should be 100, indicating that origin-pull is performed by weight.
                     * @param Weight The weight when `ConfigurationType=weight`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins in a group should be 100, indicating that origin-pull is performed by weight.
The weight when `ConfigurationType=proto`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins with the same protocol in a group should be 100, indicating that origin-pull is performed by weight.
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取The origin protocol when `ConfigurationType=proto`, indicating that origin-pull is performed by protocol.
<li>`http`: HTTP protocol</li>
<li>`https`: HTTPS protocol</li>
                     * @return Proto The origin protocol when `ConfigurationType=proto`, indicating that origin-pull is performed by protocol.
<li>`http`: HTTP protocol</li>
<li>`https`: HTTPS protocol</li>
                     */
                    std::string GetProto() const;

                    /**
                     * 设置The origin protocol when `ConfigurationType=proto`, indicating that origin-pull is performed by protocol.
<li>`http`: HTTP protocol</li>
<li>`https`: HTTPS protocol</li>
                     * @param Proto The origin protocol when `ConfigurationType=proto`, indicating that origin-pull is performed by protocol.
<li>`http`: HTTP protocol</li>
<li>`https`: HTTPS protocol</li>
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取The region when `ConfigurationType=area`, which is specified by country code (ISO 3166 alpha-2) or continent code. If not specified, it indicates all regions. Supported continent codes:
<li>`Asia`</li>
<li>`Europe`</li>
<li>`Africa`</li>
<li>`Oceania`</li>
<li>`Americas`</li>An origin group must have at least one origin configured with all regions.
                     * @return Area The region when `ConfigurationType=area`, which is specified by country code (ISO 3166 alpha-2) or continent code. If not specified, it indicates all regions. Supported continent codes:
<li>`Asia`</li>
<li>`Europe`</li>
<li>`Africa`</li>
<li>`Oceania`</li>
<li>`Americas`</li>An origin group must have at least one origin configured with all regions.
                     */
                    std::vector<std::string> GetArea() const;

                    /**
                     * 设置The region when `ConfigurationType=area`, which is specified by country code (ISO 3166 alpha-2) or continent code. If not specified, it indicates all regions. Supported continent codes:
<li>`Asia`</li>
<li>`Europe`</li>
<li>`Africa`</li>
<li>`Oceania`</li>
<li>`Americas`</li>An origin group must have at least one origin configured with all regions.
                     * @param Area The region when `ConfigurationType=area`, which is specified by country code (ISO 3166 alpha-2) or continent code. If not specified, it indicates all regions. Supported continent codes:
<li>`Asia`</li>
<li>`Europe`</li>
<li>`Africa`</li>
<li>`Oceania`</li>
<li>`Americas`</li>An origin group must have at least one origin configured with all regions.
                     */
                    void SetArea(const std::vector<std::string>& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取It is valid only when `OriginType=third_part`.
Whether the origin group is private. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>If not specified, it defaults to false.
                     * @return Private It is valid only when `OriginType=third_part`.
Whether the origin group is private. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>If not specified, it defaults to false.
                     */
                    bool GetPrivate() const;

                    /**
                     * 设置It is valid only when `OriginType=third_part`.
Whether the origin group is private. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>If not specified, it defaults to false.
                     * @param Private It is valid only when `OriginType=third_part`.
Whether the origin group is private. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>If not specified, it defaults to false.
                     */
                    void SetPrivate(const bool& _private);

                    /**
                     * 判断参数 Private 是否已赋值
                     * @return Private 是否已赋值
                     */
                    bool PrivateHasBeenSet() const;

                    /**
                     * 获取The authentication parameter, which is used when `Private=true`.
                     * @return PrivateParameters The authentication parameter, which is used when `Private=true`.
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置The authentication parameter, which is used when `Private=true`.
                     * @param PrivateParameters The authentication parameter, which is used when `Private=true`.
                     */
                    void SetPrivateParameters(const std::vector<PrivateParameter>& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     */
                    bool PrivateParametersHasBeenSet() const;

                private:

                    /**
                     * The origin record value, which can be an IPv4/IPv6 address or a domain name.
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * The origin record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * The origin port. Value rang: 1-65535.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * The weight when `ConfigurationType=weight`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins in a group should be 100, indicating that origin-pull is performed by weight.
The weight when `ConfigurationType=proto`.
If 0 or no value is passed, the weight of each origin in a group will be 0 or left empty, indicating that origin-pull is performed by round-robin.
If a value between 1-100 is passed, the total weight of multiple origins with the same protocol in a group should be 100, indicating that origin-pull is performed by weight.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * The origin protocol when `ConfigurationType=proto`, indicating that origin-pull is performed by protocol.
<li>`http`: HTTP protocol</li>
<li>`https`: HTTPS protocol</li>
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * The region when `ConfigurationType=area`, which is specified by country code (ISO 3166 alpha-2) or continent code. If not specified, it indicates all regions. Supported continent codes:
<li>`Asia`</li>
<li>`Europe`</li>
<li>`Africa`</li>
<li>`Oceania`</li>
<li>`Americas`</li>An origin group must have at least one origin configured with all regions.
                     */
                    std::vector<std::string> m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * It is valid only when `OriginType=third_part`.
Whether the origin group is private. Values:
<li>`true`: Yes.</li>
<li>`false`: No.</li>If not specified, it defaults to false.
                     */
                    bool m_private;
                    bool m_privateHasBeenSet;

                    /**
                     * The authentication parameter, which is used when `Private=true`.
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_
