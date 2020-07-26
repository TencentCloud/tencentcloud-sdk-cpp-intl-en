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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SUBTASKDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SUBTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Information of subtask in workflow task in the instance operation history (such as each check item in a upgrade check task)
                */
                class SubTaskDetail : public AbstractModel
                {
                public:
                    SubTaskDetail();
                    ~SubTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtask name
                     * @return Name Subtask name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subtask name
                     * @param Name Subtask name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Subtask result
                     * @return Result Subtask result
                     */
                    bool GetResult() const;

                    /**
                     * 设置Subtask result
                     * @param Result Subtask result
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Subtask error message
                     * @return ErrMsg Subtask error message
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Subtask error message
                     * @param ErrMsg Subtask error message
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取Subtask type
                     * @return Type Subtask type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Subtask type
                     * @param Type Subtask type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Subtask status. 0: processing, 1: succeeded, -1: failed
                     * @return Status Subtask status. 0: processing, 1: succeeded, -1: failed
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Subtask status. 0: processing, 1: succeeded, -1: failed
                     * @param Status Subtask status. 0: processing, 1: succeeded, -1: failed
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Name of the index for which the check for upgrade failed
                     * @return FailedIndices Name of the index for which the check for upgrade failed
                     */
                    std::vector<std::string> GetFailedIndices() const;

                    /**
                     * 设置Name of the index for which the check for upgrade failed
                     * @param FailedIndices Name of the index for which the check for upgrade failed
                     */
                    void SetFailedIndices(const std::vector<std::string>& _failedIndices);

                    /**
                     * 判断参数 FailedIndices 是否已赋值
                     * @return FailedIndices 是否已赋值
                     */
                    bool FailedIndicesHasBeenSet() const;

                    /**
                     * 获取Subtask end time
                     * @return FinishTime Subtask end time
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Subtask end time
                     * @param FinishTime Subtask end time
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Subtask level. 1: warning, 2: failed
                     * @return Level Subtask level. 1: warning, 2: failed
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Subtask level. 1: warning, 2: failed
                     * @param Level Subtask level. 1: warning, 2: failed
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * Subtask name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subtask result
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Subtask error message
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Subtask type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Subtask status. 0: processing, 1: succeeded, -1: failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Name of the index for which the check for upgrade failed
                     */
                    std::vector<std::string> m_failedIndices;
                    bool m_failedIndicesHasBeenSet;

                    /**
                     * Subtask end time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Subtask level. 1: warning, 2: failed
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SUBTASKDETAIL_H_
