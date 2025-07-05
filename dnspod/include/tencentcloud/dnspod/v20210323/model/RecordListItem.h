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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDLISTITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Record list elements
                */
                class RecordListItem : public AbstractModel
                {
                public:
                    RecordListItem();
                    ~RecordListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The record ID.
                     * @return RecordId The record ID.
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置The record ID.
                     * @param _recordId The record ID.
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取The record value.
                     * @return Value The record value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置The record value.
                     * @param _value The record value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取The record status. Valid values: `ENABLE` (enabled), `DISABLE` (disabled).
                     * @return Status The record status. Valid values: `ENABLE` (enabled), `DISABLE` (disabled).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The record status. Valid values: `ENABLE` (enabled), `DISABLE` (disabled).
                     * @param _status The record status. Valid values: `ENABLE` (enabled), `DISABLE` (disabled).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The update time.
                     * @return UpdatedOn The update time.
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置The update time.
                     * @param _updatedOn The update time.
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取The host name.
                     * @return Name The host name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The host name.
                     * @param _name The host name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The record split zone.
                     * @return Line The record split zone.
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置The record split zone.
                     * @param _line The record split zone.
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取The split zone ID.
                     * @return LineId The split zone ID.
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置The split zone ID.
                     * @param _lineId The split zone ID.
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取The record type.
                     * @return Type The record type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The record type.
                     * @param _type The record type.
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
                     * 获取The record weight, which is required for round-robin DNS records.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight The record weight, which is required for round-robin DNS records.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置The record weight, which is required for round-robin DNS records.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight The record weight, which is required for round-robin DNS records.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The monitoring status of the record. Valid values: `OK` (normal), `WARN` (warning), and `DOWN` (downtime). It is empty if no monitoring is set or the monitoring is suspended.
                     * @return MonitorStatus The monitoring status of the record. Valid values: `OK` (normal), `WARN` (warning), and `DOWN` (downtime). It is empty if no monitoring is set or the monitoring is suspended.
                     * 
                     */
                    std::string GetMonitorStatus() const;

                    /**
                     * 设置The monitoring status of the record. Valid values: `OK` (normal), `WARN` (warning), and `DOWN` (downtime). It is empty if no monitoring is set or the monitoring is suspended.
                     * @param _monitorStatus The monitoring status of the record. Valid values: `OK` (normal), `WARN` (warning), and `DOWN` (downtime). It is empty if no monitoring is set or the monitoring is suspended.
                     * 
                     */
                    void SetMonitorStatus(const std::string& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取The record remarks.
                     * @return Remark The record remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置The record remarks.
                     * @param _remark The record remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取The record cache time.
                     * @return TTL The record cache time.
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置The record cache time.
                     * @param _tTL The record cache time.
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取The MX value, applicable to the MX record only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MX The MX value, applicable to the MX record only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMX() const;

                    /**
                     * 设置The MX value, applicable to the MX record only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mX The MX value, applicable to the MX record only.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMX(const uint64_t& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                    /**
                     * 获取Whether it is a default NS record.
                     * @return DefaultNS Whether it is a default NS record.
                     * 
                     */
                    bool GetDefaultNS() const;

                    /**
                     * 设置Whether it is a default NS record.
                     * @param _defaultNS Whether it is a default NS record.
                     * 
                     */
                    void SetDefaultNS(const bool& _defaultNS);

                    /**
                     * 判断参数 DefaultNS 是否已赋值
                     * @return DefaultNS 是否已赋值
                     * 
                     */
                    bool DefaultNSHasBeenSet() const;

                private:

                    /**
                     * The record ID.
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * The record value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * The record status. Valid values: `ENABLE` (enabled), `DISABLE` (disabled).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The update time.
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * The host name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The record split zone.
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * The split zone ID.
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * The record type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The record weight, which is required for round-robin DNS records.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * The monitoring status of the record. Valid values: `OK` (normal), `WARN` (warning), and `DOWN` (downtime). It is empty if no monitoring is set or the monitoring is suspended.
                     */
                    std::string m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * The record remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The record cache time.
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * The MX value, applicable to the MX record only.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_mX;
                    bool m_mXHasBeenSet;

                    /**
                     * Whether it is a default NS record.
                     */
                    bool m_defaultNS;
                    bool m_defaultNSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDLISTITEM_H_
