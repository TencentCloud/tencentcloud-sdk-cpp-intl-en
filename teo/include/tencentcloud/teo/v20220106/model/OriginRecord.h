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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORD_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginRecordPrivateParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取Record value
                     * @return Record Record value
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置Record value
                     * @param Record Record value
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取Region of the origin group. It’s available when the origin group `Type` is `area`. 
If it’s left empty, it means to use the default region.
                     * @return Area Region of the origin group. It’s available when the origin group `Type` is `area`. 
If it’s left empty, it means to use the default region.
                     */
                    std::vector<std::string> GetArea() const;

                    /**
                     * 设置Region of the origin group. It’s available when the origin group `Type` is `area`. 
If it’s left empty, it means to use the default region.
                     * @param Area Region of the origin group. It’s available when the origin group `Type` is `area`. 
If it’s left empty, it means to use the default region.
                     */
                    void SetArea(const std::vector<std::string>& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取The weight of the origin group. It’s available when the `Type` is `weight`.
                     * @return Weight The weight of the origin group. It’s available when the `Type` is `weight`.
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置The weight of the origin group. It’s available when the `Type` is `weight`.
                     * @param Weight The weight of the origin group. It’s available when the `Type` is `weight`.
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return Port Port
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port
                     * @param Port Port
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Record ID
                     * @return RecordId Record ID
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Record ID
                     * @param RecordId Record ID
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether to run private origin authentication.
It is valid only when `OriginType=third_part`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Private Specifies whether to run private origin authentication.
It is valid only when `OriginType=third_part`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool GetPrivate() const;

                    /**
                     * 设置Specifies whether to run private origin authentication.
It is valid only when `OriginType=third_part`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Private Specifies whether to run private origin authentication.
It is valid only when `OriginType=third_part`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPrivate(const bool& _private);

                    /**
                     * 判断参数 Private 是否已赋值
                     * @return Private 是否已赋值
                     */
                    bool PrivateHasBeenSet() const;

                    /**
                     * 获取Private origin parameter.
It is valid only when `Private=true`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PrivateParameter Private origin parameter.
It is valid only when `Private=true`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<OriginRecordPrivateParameter> GetPrivateParameter() const;

                    /**
                     * 设置Private origin parameter.
It is valid only when `Private=true`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param PrivateParameter Private origin parameter.
It is valid only when `Private=true`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPrivateParameter(const std::vector<OriginRecordPrivateParameter>& _privateParameter);

                    /**
                     * 判断参数 PrivateParameter 是否已赋值
                     * @return PrivateParameter 是否已赋值
                     */
                    bool PrivateParameterHasBeenSet() const;

                private:

                    /**
                     * Record value
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * Region of the origin group. It’s available when the origin group `Type` is `area`. 
If it’s left empty, it means to use the default region.
                     */
                    std::vector<std::string> m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * The weight of the origin group. It’s available when the `Type` is `weight`.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Record ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Specifies whether to run private origin authentication.
It is valid only when `OriginType=third_part`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_private;
                    bool m_privateHasBeenSet;

                    /**
                     * Private origin parameter.
It is valid only when `Private=true`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<OriginRecordPrivateParameter> m_privateParameter;
                    bool m_privateParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORD_H_
