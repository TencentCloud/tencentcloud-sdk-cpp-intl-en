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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESRECHARGEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESRECHARGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EsInfo.h>
#include <tencentcloud/cls/v20201016/model/EsImportInfo.h>
#include <tencentcloud/cls/v20201016/model/EsTimeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Import es configuration info
                */
                class EsRechargeInfo : public AbstractModel
                {
                public:
                    EsRechargeInfo();
                    ~EsRechargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Main account id.
                     * @return Uin Main account id.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Main account id.
                     * @param _uin Main account id.
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @return TopicId Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * @param _topicId Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Configuration name
                     * @return Name Configuration name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Configuration name
                     * @param _name Configuration name
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
                     * 获取es index.
                     * @return Index es index.
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置es index.
                     * @param _index es index.
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Elasticsearch Query Statement.
                     * @return Query Elasticsearch Query Statement.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Elasticsearch Query Statement.
                     * @param _query Elasticsearch Query Statement.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取es cluster information.
                     * @return EsInfo es cluster information.
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置es cluster information.
                     * @param _esInfo es cluster information.
                     * 
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取es import information.
                     * @return ImportInfo es import information.
                     * 
                     */
                    EsImportInfo GetImportInfo() const;

                    /**
                     * 设置es import information.
                     * @param _importInfo es import information.
                     * 
                     */
                    void SetImportInfo(const EsImportInfo& _importInfo);

                    /**
                     * 判断参数 ImportInfo 是否已赋值
                     * @return ImportInfo 是否已赋值
                     * 
                     */
                    bool ImportInfoHasBeenSet() const;

                    /**
                     * 获取ES import time configuration message.
                     * @return TimeInfo ES import time configuration message.
                     * 
                     */
                    EsTimeInfo GetTimeInfo() const;

                    /**
                     * 设置ES import time configuration message.
                     * @param _timeInfo ES import time configuration message.
                     * 
                     */
                    void SetTimeInfo(const EsTimeInfo& _timeInfo);

                    /**
                     * 判断参数 TimeInfo 是否已赋值
                     * @return TimeInfo 是否已赋值
                     * 
                     */
                    bool TimeInfoHasBeenSet() const;

                    /**
                     * 获取Task status.
1. Running
Suspend
3. Complete
4. Exception
                     * @return Status Task status.
1. Running
Suspend
3. Complete
4. Exception
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Task status.
1. Running
Suspend
3. Complete
4. Exception
                     * @param _status Task status.
1. Running
Suspend
3. Complete
4. Exception
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task progress 0-100 percentage. 100: means done.
                     * @return Progress Task progress 0-100 percentage. 100: means done.
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Task progress 0-100 percentage. 100: means done.
                     * @param _progress Task progress 0-100 percentage. 100: means done.
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Sub-account id.
                     * @return SubUin Sub-account id.
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置Sub-account id.
                     * @param _subUin Sub-account id.
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modify the time.
                     * @return UpdateTime Modify the time.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Modify the time.
                     * @param _updateTime Modify the time.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @return HasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * @param _hasServicesLog Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Main account id.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Log topic ID.
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
- Obtain the log topic Id through [Create Log Topic](https://www.tencentcloud.com/document/product/614/56456?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * es index.
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Elasticsearch Query Statement.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * es cluster information.
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * es import information.
                     */
                    EsImportInfo m_importInfo;
                    bool m_importInfoHasBeenSet;

                    /**
                     * ES import time configuration message.
                     */
                    EsTimeInfo m_timeInfo;
                    bool m_timeInfoHasBeenSet;

                    /**
                     * Task status.
1. Running
Suspend
3. Complete
4. Exception
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress 0-100 percentage. 100: means done.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Sub-account id.
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * Creation time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modify the time.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether to enable service log shipping. Valid values: 1: disable; 2: enable.
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESRECHARGEINFO_H_
