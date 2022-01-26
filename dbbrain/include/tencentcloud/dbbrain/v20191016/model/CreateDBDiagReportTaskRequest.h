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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * CreateDBDiagReportTask request structure.
                */
                class CreateDBDiagReportTaskRequest : public AbstractModel
                {
                public:
                    CreateDBDiagReportTaskRequest();
                    ~CreateDBDiagReportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time, such as `2020-11-08T14:00:00+08:00`.
                     * @return StartTime Start time, such as `2020-11-08T14:00:00+08:00`.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, such as `2020-11-08T14:00:00+08:00`.
                     * @param StartTime Start time, such as `2020-11-08T14:00:00+08:00`.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, such as `2020-11-09T14:00:00+08:00`.
                     * @return EndTime End time, such as `2020-11-09T14:00:00+08:00`.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, such as `2020-11-09T14:00:00+08:00`.
                     * @param EndTime End time, such as `2020-11-09T14:00:00+08:00`.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Whether to send an email. Valid values: 0 - Yes, 1 - No.
                     * @return SendMailFlag Whether to send an email. Valid values: 0 - Yes, 1 - No.
                     */
                    int64_t GetSendMailFlag() const;

                    /**
                     * 设置Whether to send an email. Valid values: 0 - Yes, 1 - No.
                     * @param SendMailFlag Whether to send an email. Valid values: 0 - Yes, 1 - No.
                     */
                    void SetSendMailFlag(const int64_t& _sendMailFlag);

                    /**
                     * 判断参数 SendMailFlag 是否已赋值
                     * @return SendMailFlag 是否已赋值
                     */
                    bool SendMailFlagHasBeenSet() const;

                    /**
                     * 获取An array of contact IDs to receive the email.
                     * @return ContactPerson An array of contact IDs to receive the email.
                     */
                    std::vector<int64_t> GetContactPerson() const;

                    /**
                     * 设置An array of contact IDs to receive the email.
                     * @param ContactPerson An array of contact IDs to receive the email.
                     */
                    void SetContactPerson(const std::vector<int64_t>& _contactPerson);

                    /**
                     * 判断参数 ContactPerson 是否已赋值
                     * @return ContactPerson 是否已赋值
                     */
                    bool ContactPersonHasBeenSet() const;

                    /**
                     * 获取An array of contact group IDs to receive the email.
                     * @return ContactGroup An array of contact group IDs to receive the email.
                     */
                    std::vector<int64_t> GetContactGroup() const;

                    /**
                     * 设置An array of contact group IDs to receive the email.
                     * @param ContactGroup An array of contact group IDs to receive the email.
                     */
                    void SetContactGroup(const std::vector<int64_t>& _contactGroup);

                    /**
                     * 判断参数 ContactGroup 是否已赋值
                     * @return ContactGroup 是否已赋值
                     */
                    bool ContactGroupHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TencentDB for CynosDB (compatible with MySQL)). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TencentDB for CynosDB (compatible with MySQL)). Default value: `mysql`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TencentDB for CynosDB (compatible with MySQL)). Default value: `mysql`.
                     * @param Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TencentDB for CynosDB (compatible with MySQL)). Default value: `mysql`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time, such as `2020-11-08T14:00:00+08:00`.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, such as `2020-11-09T14:00:00+08:00`.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Whether to send an email. Valid values: 0 - Yes, 1 - No.
                     */
                    int64_t m_sendMailFlag;
                    bool m_sendMailFlagHasBeenSet;

                    /**
                     * An array of contact IDs to receive the email.
                     */
                    std::vector<int64_t> m_contactPerson;
                    bool m_contactPersonHasBeenSet;

                    /**
                     * An array of contact group IDs to receive the email.
                     */
                    std::vector<int64_t> m_contactGroup;
                    bool m_contactGroupHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TencentDB for CynosDB (compatible with MySQL)). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTTASKREQUEST_H_
