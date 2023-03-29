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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHDOMAINBUYLOG_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHDOMAINBUYLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * The log of bulk domain purchase
                */
                class BatchDomainBuyLog : public AbstractModel
                {
                public:
                    BatchDomainBuyLog();
                    ~BatchDomainBuyLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The log ID.
                     * @return LogId The log ID.
                     */
                    int64_t GetLogId() const;

                    /**
                     * 设置The log ID.
                     * @param LogId The log ID.
                     */
                    void SetLogId(const int64_t& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     * @return Action The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     * @param Action The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The quantity.
                     * @return Number The quantity.
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置The quantity.
                     * @param Number The quantity.
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取The execution status. Valid values: `doing`, `done`
                     * @return Status The execution status. Valid values: `doing`, `done`
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The execution status. Valid values: `doing`, `done`
                     * @param Status The execution status. Valid values: `doing`, `done`
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The submission time.
                     * @return CreatedOn The submission time.
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置The submission time.
                     * @param CreatedOn The submission time.
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                private:

                    /**
                     * The log ID.
                     */
                    int64_t m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * The bulk operation type. Valid values: `new` (register domains), `batch_transfer_prohibition_on` (enable transfer prohibition), `batch_transfer_prohibition_off` (disable transfer prohibition), `batch_update_prohibition_on` (enable update prohibition), `batch_update_prohibition_off` (disable update prohibition).
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The quantity.
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * The execution status. Valid values: `doing`, `done`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The submission time.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHDOMAINBUYLOG_H_
