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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SENDTASKDATA_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SENDTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Template.h>
#include <tencentcloud/ses/v20201002/model/CycleEmailParam.h>
#include <tencentcloud/ses/v20201002/model/TimedEmailParam.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Email sending task data
                */
                class SendTaskData : public AbstractModel
                {
                public:
                    SendTaskData();
                    ~SendTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Sender address
                     * @return FromEmailAddress Sender address
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置Sender address
                     * @param _fromEmailAddress Sender address
                     * 
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     * 
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取Recipient group ID
                     * @return ReceiverId Recipient group ID
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置Recipient group ID
                     * @param _receiverId Recipient group ID
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent
                     * @return TaskStatus Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent
                     * 
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent
                     * @param _taskStatus Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent
                     * 
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     * @return TaskType Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     * @param _taskType Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Number of emails requested to be sent
                     * @return RequestCount Number of emails requested to be sent
                     * 
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置Number of emails requested to be sent
                     * @param _requestCount Number of emails requested to be sent
                     * 
                     */
                    void SetRequestCount(const uint64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     * 
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取Number of emails sent
                     * @return SendCount Number of emails sent
                     * 
                     */
                    uint64_t GetSendCount() const;

                    /**
                     * 设置Number of emails sent
                     * @param _sendCount Number of emails sent
                     * 
                     */
                    void SetSendCount(const uint64_t& _sendCount);

                    /**
                     * 判断参数 SendCount 是否已赋值
                     * @return SendCount 是否已赋值
                     * 
                     */
                    bool SendCountHasBeenSet() const;

                    /**
                     * 获取Number of emails cached
                     * @return CacheCount Number of emails cached
                     * 
                     */
                    uint64_t GetCacheCount() const;

                    /**
                     * 设置Number of emails cached
                     * @param _cacheCount Number of emails cached
                     * 
                     */
                    void SetCacheCount(const uint64_t& _cacheCount);

                    /**
                     * 判断参数 CacheCount 是否已赋值
                     * @return CacheCount 是否已赋值
                     * 
                     */
                    bool CacheCountHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _createTime Task creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task update time
                     * @return UpdateTime Task update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task update time
                     * @param _updateTime Task update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Email subject
                     * @return Subject Email subject
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Email subject
                     * @param _subject Email subject
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取Template and template data
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Template Template and template data
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置Template and template data
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param _template Template and template data
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetTemplate(const Template& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取Parameters of a recurring task
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return CycleParam Parameters of a recurring task
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    CycleEmailParam GetCycleParam() const;

                    /**
                     * 设置Parameters of a recurring task
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param _cycleParam Parameters of a recurring task
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetCycleParam(const CycleEmailParam& _cycleParam);

                    /**
                     * 判断参数 CycleParam 是否已赋值
                     * @return CycleParam 是否已赋值
                     * 
                     */
                    bool CycleParamHasBeenSet() const;

                    /**
                     * 获取Parameters of a scheduled task
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return TimedParam Parameters of a scheduled task
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    TimedEmailParam GetTimedParam() const;

                    /**
                     * 设置Parameters of a scheduled task
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param _timedParam Parameters of a scheduled task
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetTimedParam(const TimedEmailParam& _timedParam);

                    /**
                     * 判断参数 TimedParam 是否已赋值
                     * @return TimedParam 是否已赋值
                     * 
                     */
                    bool TimedParamHasBeenSet() const;

                    /**
                     * 获取Task exception information
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return ErrMsg Task exception information
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Task exception information
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param _errMsg Task exception information
Note: This field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取Recipient group name
                     * @return ReceiversName Recipient group name
                     * 
                     */
                    std::string GetReceiversName() const;

                    /**
                     * 设置Recipient group name
                     * @param _receiversName Recipient group name
                     * 
                     */
                    void SetReceiversName(const std::string& _receiversName);

                    /**
                     * 判断参数 ReceiversName 是否已赋值
                     * @return ReceiversName 是否已赋值
                     * 
                     */
                    bool ReceiversNameHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Sender address
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * Recipient group ID
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * Task status. `1`: to start; `5`: sending; `6`: sending suspended today; `7`: sending error; `10`: sent
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Number of emails requested to be sent
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * Number of emails sent
                     */
                    uint64_t m_sendCount;
                    bool m_sendCountHasBeenSet;

                    /**
                     * Number of emails cached
                     */
                    uint64_t m_cacheCount;
                    bool m_cacheCountHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Email subject
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Template and template data
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * Parameters of a recurring task
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    CycleEmailParam m_cycleParam;
                    bool m_cycleParamHasBeenSet;

                    /**
                     * Parameters of a scheduled task
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    TimedEmailParam m_timedParam;
                    bool m_timedParamHasBeenSet;

                    /**
                     * Task exception information
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Recipient group name
                     */
                    std::string m_receiversName;
                    bool m_receiversNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDTASKDATA_H_
