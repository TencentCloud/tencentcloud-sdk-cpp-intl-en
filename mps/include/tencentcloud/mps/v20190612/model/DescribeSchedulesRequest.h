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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeSchedules request structure.
                */
                class DescribeSchedulesRequest : public AbstractModel
                {
                public:
                    DescribeSchedulesRequest();
                    ~DescribeSchedulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The IDs of the schemes to query. Array length limit: 100.
                     * @return ScheduleIds The IDs of the schemes to query. Array length limit: 100.
                     */
                    std::vector<int64_t> GetScheduleIds() const;

                    /**
                     * 设置The IDs of the schemes to query. Array length limit: 100.
                     * @param ScheduleIds The IDs of the schemes to query. Array length limit: 100.
                     */
                    void SetScheduleIds(const std::vector<int64_t>& _scheduleIds);

                    /**
                     * 判断参数 ScheduleIds 是否已赋值
                     * @return ScheduleIds 是否已赋值
                     */
                    bool ScheduleIdsHasBeenSet() const;

                    /**
                     * 获取The trigger type. Valid values:
<li>`CosFileUpload`: The scheme is triggered when a file is uploaded to Tencent Cloud Object Storage (COS).</li>
<li>`AwsS3FileUpload`: The scheme is triggered when a file is uploaded to AWS S3.</li>
If you do not specify this parameter or leave it empty, all schemes will be returned regardless of the trigger type.
                     * @return TriggerType The trigger type. Valid values:
<li>`CosFileUpload`: The scheme is triggered when a file is uploaded to Tencent Cloud Object Storage (COS).</li>
<li>`AwsS3FileUpload`: The scheme is triggered when a file is uploaded to AWS S3.</li>
If you do not specify this parameter or leave it empty, all schemes will be returned regardless of the trigger type.
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置The trigger type. Valid values:
<li>`CosFileUpload`: The scheme is triggered when a file is uploaded to Tencent Cloud Object Storage (COS).</li>
<li>`AwsS3FileUpload`: The scheme is triggered when a file is uploaded to AWS S3.</li>
If you do not specify this parameter or leave it empty, all schemes will be returned regardless of the trigger type.
                     * @param TriggerType The trigger type. Valid values:
<li>`CosFileUpload`: The scheme is triggered when a file is uploaded to Tencent Cloud Object Storage (COS).</li>
<li>`AwsS3FileUpload`: The scheme is triggered when a file is uploaded to AWS S3.</li>
If you do not specify this parameter or leave it empty, all schemes will be returned regardless of the trigger type.
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取The scheme status. Valid values:
<li>`Enabled`</li>
<li>`Disabled`</li>
If you do not specify this parameter, all schemes will be returned regardless of the status.
                     * @return Status The scheme status. Valid values:
<li>`Enabled`</li>
<li>`Disabled`</li>
If you do not specify this parameter, all schemes will be returned regardless of the status.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The scheme status. Valid values:
<li>`Enabled`</li>
<li>`Disabled`</li>
If you do not specify this parameter, all schemes will be returned regardless of the status.
                     * @param Status The scheme status. Valid values:
<li>`Enabled`</li>
<li>`Disabled`</li>
If you do not specify this parameter, all schemes will be returned regardless of the status.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The pagination offset. Default value: 0.
                     * @return Offset The pagination offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The pagination offset. Default value: 0.
                     * @param Offset The pagination offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The maximum number of records to return. Default value: 10. Maximum value: 100.
                     * @return Limit The maximum number of records to return. Default value: 10. Maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of records to return. Default value: 10. Maximum value: 100.
                     * @param Limit The maximum number of records to return. Default value: 10. Maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The IDs of the schemes to query. Array length limit: 100.
                     */
                    std::vector<int64_t> m_scheduleIds;
                    bool m_scheduleIdsHasBeenSet;

                    /**
                     * The trigger type. Valid values:
<li>`CosFileUpload`: The scheme is triggered when a file is uploaded to Tencent Cloud Object Storage (COS).</li>
<li>`AwsS3FileUpload`: The scheme is triggered when a file is uploaded to AWS S3.</li>
If you do not specify this parameter or leave it empty, all schemes will be returned regardless of the trigger type.
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * The scheme status. Valid values:
<li>`Enabled`</li>
<li>`Disabled`</li>
If you do not specify this parameter, all schemes will be returned regardless of the status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The pagination offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of records to return. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESREQUEST_H_
