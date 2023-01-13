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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESECURITYAUDITLOGEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESECURITYAUDITLOGEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateSecurityAuditLogExportTask request structure.
                */
                class CreateSecurityAuditLogExportTaskRequest : public AbstractModel
                {
                public:
                    CreateSecurityAuditLogExportTaskRequest();
                    ~CreateSecurityAuditLogExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security audit group ID.
                     * @return SecAuditGroupId Security audit group ID.
                     */
                    std::string GetSecAuditGroupId() const;

                    /**
                     * 设置Security audit group ID.
                     * @param SecAuditGroupId Security audit group ID.
                     */
                    void SetSecAuditGroupId(const std::string& _secAuditGroupId);

                    /**
                     * 判断参数 SecAuditGroupId 是否已赋值
                     * @return SecAuditGroupId 是否已赋值
                     */
                    bool SecAuditGroupIdHasBeenSet() const;

                    /**
                     * 获取Exported log start time, such as 2020-12-28 00:00:00.
                     * @return StartTime Exported log start time, such as 2020-12-28 00:00:00.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Exported log start time, such as 2020-12-28 00:00:00.
                     * @param StartTime Exported log start time, such as 2020-12-28 00:00:00.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Exported log end time, such as 2020-12-28 01:00:00.
                     * @return EndTime Exported log end time, such as 2020-12-28 01:00:00.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Exported log end time, such as 2020-12-28 01:00:00.
                     * @param EndTime Exported log end time, such as 2020-12-28 01:00:00.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Service type. Valid value: `mysql` (TencentDB for MySQL).
                     * @return Product Service type. Valid value: `mysql` (TencentDB for MySQL).
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid value: `mysql` (TencentDB for MySQL).
                     * @param Product Service type. Valid value: `mysql` (TencentDB for MySQL).
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取List of log risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
                     * @return DangerLevels List of log risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
                     */
                    std::vector<int64_t> GetDangerLevels() const;

                    /**
                     * 设置List of log risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
                     * @param DangerLevels List of log risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
                     */
                    void SetDangerLevels(const std::vector<int64_t>& _dangerLevels);

                    /**
                     * 判断参数 DangerLevels 是否已赋值
                     * @return DangerLevels 是否已赋值
                     */
                    bool DangerLevelsHasBeenSet() const;

                private:

                    /**
                     * Security audit group ID.
                     */
                    std::string m_secAuditGroupId;
                    bool m_secAuditGroupIdHasBeenSet;

                    /**
                     * Exported log start time, such as 2020-12-28 00:00:00.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Exported log end time, such as 2020-12-28 01:00:00.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Service type. Valid value: `mysql` (TencentDB for MySQL).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * List of log risk levels. Valid values: `0` (no risk), `1` (low risk), `2` (medium risk), `3` (high risk).
                     */
                    std::vector<int64_t> m_dangerLevels;
                    bool m_dangerLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESECURITYAUDITLOGEXPORTTASKREQUEST_H_
