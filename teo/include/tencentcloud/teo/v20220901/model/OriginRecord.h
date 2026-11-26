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
                * Origin server group records
                */
                class OriginRecord : public AbstractModel
                {
                public:
                    OriginRecord();
                    ~OriginRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server record value, excluding port information. It can be an IPv4 address, IPv6 address, or domain name format.
                     * @return Record Origin server record value, excluding port information. It can be an IPv4 address, IPv6 address, or domain name format.
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置Origin server record value, excluding port information. It can be an IPv4 address, IPv6 address, or domain name format.
                     * @param _record Origin server record value, excluding port information. It can be an IPv4 address, IPv6 address, or domain name format.
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
                     * 获取Origin server type. Valid values:
<li>IP_DOMAIN: IPV4, IPV6, domain type origin server;</li>
<li>COS: COS origin.</li>
<li>AWS_S3: AWS S3 COS origin server.</li>
                     * @return Type Origin server type. Valid values:
<li>IP_DOMAIN: IPV4, IPV6, domain type origin server;</li>
<li>COS: COS origin.</li>
<li>AWS_S3: AWS S3 COS origin server.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Origin server type. Valid values:
<li>IP_DOMAIN: IPV4, IPV6, domain type origin server;</li>
<li>COS: COS origin.</li>
<li>AWS_S3: AWS S3 COS origin server.</li>
                     * @param _type Origin server type. Valid values:
<li>IP_DOMAIN: IPV4, IPV6, domain type origin server;</li>
<li>COS: COS origin.</li>
<li>AWS_S3: AWS S3 COS origin server.</li>
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
                     * 获取Origin record ID.
                     * @return RecordId Origin record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Origin record ID.
                     * @param _recordId Origin record ID.
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
                     * 获取【Origin server weight】: A parameter used to control traffic assignment priority. Value range: 0-100 (integer): <li>Empty value: No weight is set, and the system schedules traffic based on the default policy;</li><li>0: The weight is explicitly set to 0, and traffic will not be assigned to this origin server. Note: Make sure at least one origin server has a weight above 0;</li><li>Normal value: The larger the value, the more traffic is assigned;</li>
                     * @return Weight 【Origin server weight】: A parameter used to control traffic assignment priority. Value range: 0-100 (integer): <li>Empty value: No weight is set, and the system schedules traffic based on the default policy;</li><li>0: The weight is explicitly set to 0, and traffic will not be assigned to this origin server. Note: Make sure at least one origin server has a weight above 0;</li><li>Normal value: The larger the value, the more traffic is assigned;</li>
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置【Origin server weight】: A parameter used to control traffic assignment priority. Value range: 0-100 (integer): <li>Empty value: No weight is set, and the system schedules traffic based on the default policy;</li><li>0: The weight is explicitly set to 0, and traffic will not be assigned to this origin server. Note: Make sure at least one origin server has a weight above 0;</li><li>Normal value: The larger the value, the more traffic is assigned;</li>
                     * @param _weight 【Origin server weight】: A parameter used to control traffic assignment priority. Value range: 0-100 (integer): <li>Empty value: No weight is set, and the system schedules traffic based on the default policy;</li><li>0: The weight is explicitly set to 0, and traffic will not be assigned to this origin server. Note: Make sure at least one origin server has a weight above 0;</li><li>Normal value: The larger the value, the more traffic is assigned;</li>
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
                     * 获取Whether to use private authentication. This parameter is valid only when RecordType is COS or AWS_S3. Valid values:
<li>true: Enable private authentication;</li>
<li>false: Do not use private authentication.</li>Not specified. Default value: false.

                     * @return Private Whether to use private authentication. This parameter is valid only when RecordType is COS or AWS_S3. Valid values:
<li>true: Enable private authentication;</li>
<li>false: Do not use private authentication.</li>Not specified. Default value: false.

                     * 
                     */
                    bool GetPrivate() const;

                    /**
                     * 设置Whether to use private authentication. This parameter is valid only when RecordType is COS or AWS_S3. Valid values:
<li>true: Enable private authentication;</li>
<li>false: Do not use private authentication.</li>Not specified. Default value: false.

                     * @param _private Whether to use private authentication. This parameter is valid only when RecordType is COS or AWS_S3. Valid values:
<li>true: Enable private authentication;</li>
<li>false: Do not use private authentication.</li>Not specified. Default value: false.

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
                     * 获取Private authentication parameter. Valid when the origin server type is Private=true.
                     * @return PrivateParameters Private authentication parameter. Valid when the origin server type is Private=true.
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置Private authentication parameter. Valid when the origin server type is Private=true.
                     * @param _privateParameters Private authentication parameter. Valid when the origin server type is Private=true.
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
                     * Origin server record value, excluding port information. It can be an IPv4 address, IPv6 address, or domain name format.
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * Origin server type. Valid values:
<li>IP_DOMAIN: IPV4, IPV6, domain type origin server;</li>
<li>COS: COS origin.</li>
<li>AWS_S3: AWS S3 COS origin server.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Origin record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 【Origin server weight】: A parameter used to control traffic assignment priority. Value range: 0-100 (integer): <li>Empty value: No weight is set, and the system schedules traffic based on the default policy;</li><li>0: The weight is explicitly set to 0, and traffic will not be assigned to this origin server. Note: Make sure at least one origin server has a weight above 0;</li><li>Normal value: The larger the value, the more traffic is assigned;</li>
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Whether to use private authentication. This parameter is valid only when RecordType is COS or AWS_S3. Valid values:
<li>true: Enable private authentication;</li>
<li>false: Do not use private authentication.</li>Not specified. Default value: false.

                     */
                    bool m_private;
                    bool m_privateHasBeenSet;

                    /**
                     * Private authentication parameter. Valid when the origin server type is Private=true.
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINRECORD_H_
