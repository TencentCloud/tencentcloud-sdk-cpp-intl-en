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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRecordBatch request structure.
                */
                class ModifyRecordBatchRequest : public AbstractModel
                {
                public:
                    ModifyRecordBatchRequest();
                    ~ModifyRecordBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of record IDs. You can view all DNS records and their IDs via the `DescribeRecordList` API.
                     * @return RecordIdList Array of record IDs. You can view all DNS records and their IDs via the `DescribeRecordList` API.
                     * 
                     */
                    std::vector<uint64_t> GetRecordIdList() const;

                    /**
                     * 设置Array of record IDs. You can view all DNS records and their IDs via the `DescribeRecordList` API.
                     * @param _recordIdList Array of record IDs. You can view all DNS records and their IDs via the `DescribeRecordList` API.
                     * 
                     */
                    void SetRecordIdList(const std::vector<uint64_t>& _recordIdList);

                    /**
                     * 判断参数 RecordIdList 是否已赋值
                     * @return RecordIdList 是否已赋值
                     * 
                     */
                    bool RecordIdListHasBeenSet() const;

                    /**
                     * 获取The field to be modified. Valid values: `sub_domain`, `record_type`, `area`, `value`, `mx`, `ttl`, `status`.
                     * @return Change The field to be modified. Valid values: `sub_domain`, `record_type`, `area`, `value`, `mx`, `ttl`, `status`.
                     * 
                     */
                    std::string GetChange() const;

                    /**
                     * 设置The field to be modified. Valid values: `sub_domain`, `record_type`, `area`, `value`, `mx`, `ttl`, `status`.
                     * @param _change The field to be modified. Valid values: `sub_domain`, `record_type`, `area`, `value`, `mx`, `ttl`, `status`.
                     * 
                     */
                    void SetChange(const std::string& _change);

                    /**
                     * 判断参数 Change 是否已赋值
                     * @return Change 是否已赋值
                     * 
                     */
                    bool ChangeHasBeenSet() const;

                    /**
                     * 获取The value to be changed to, which is required and subject to the `change` field.
                     * @return ChangeTo The value to be changed to, which is required and subject to the `change` field.
                     * 
                     */
                    std::string GetChangeTo() const;

                    /**
                     * 设置The value to be changed to, which is required and subject to the `change` field.
                     * @param _changeTo The value to be changed to, which is required and subject to the `change` field.
                     * 
                     */
                    void SetChangeTo(const std::string& _changeTo);

                    /**
                     * 判断参数 ChangeTo 是否已赋值
                     * @return ChangeTo 是否已赋值
                     * 
                     */
                    bool ChangeToHasBeenSet() const;

                    /**
                     * 获取The record value to be changed to, which is required only if the `change` field is `record_type`.
                     * @return Value The record value to be changed to, which is required only if the `change` field is `record_type`.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置The record value to be changed to, which is required only if the `change` field is `record_type`.
                     * @param _value The record value to be changed to, which is required only if the `change` field is `record_type`.
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
                     * 获取MX record priority, which is required only if the `Change` field is `mx`.
                     * @return MX MX record priority, which is required only if the `Change` field is `mx`.
                     * 
                     */
                    std::string GetMX() const;

                    /**
                     * 设置MX record priority, which is required only if the `Change` field is `mx`.
                     * @param _mX MX record priority, which is required only if the `Change` field is `mx`.
                     * 
                     */
                    void SetMX(const std::string& _mX);

                    /**
                     * 判断参数 MX 是否已赋值
                     * @return MX 是否已赋值
                     * 
                     */
                    bool MXHasBeenSet() const;

                private:

                    /**
                     * Array of record IDs. You can view all DNS records and their IDs via the `DescribeRecordList` API.
                     */
                    std::vector<uint64_t> m_recordIdList;
                    bool m_recordIdListHasBeenSet;

                    /**
                     * The field to be modified. Valid values: `sub_domain`, `record_type`, `area`, `value`, `mx`, `ttl`, `status`.
                     */
                    std::string m_change;
                    bool m_changeHasBeenSet;

                    /**
                     * The value to be changed to, which is required and subject to the `change` field.
                     */
                    std::string m_changeTo;
                    bool m_changeToHasBeenSet;

                    /**
                     * The record value to be changed to, which is required only if the `change` field is `record_type`.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * MX record priority, which is required only if the `Change` field is `mx`.
                     */
                    std::string m_mX;
                    bool m_mXHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDBATCHREQUEST_H_
