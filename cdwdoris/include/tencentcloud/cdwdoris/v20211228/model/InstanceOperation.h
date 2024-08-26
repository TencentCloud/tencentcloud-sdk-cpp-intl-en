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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEOPERATION_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Cluster operation description
                */
                class InstanceOperation : public AbstractModel
                {
                public:
                    InstanceOperation();
                    ~InstanceOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation name, such as create_instance, and scaleout_instance
                     * @return Name Operation name, such as create_instance, and scaleout_instance
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Operation name, such as create_instance, and scaleout_instance
                     * @param _name Operation name, such as create_instance, and scaleout_instance
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
                     * 获取Operation result. Success indicates success; Fail indicates failure.
                     * @return Result Operation result. Success indicates success; Fail indicates failure.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Operation result. Success indicates success; Fail indicates failure.
                     * @param _result Operation result. Success indicates success; Fail indicates failure.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Operation name description, such as create, and modify the cluster name
                     * @return Desc Operation name description, such as create, and modify the cluster name
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Operation name description, such as create, and modify the cluster name
                     * @param _desc Operation name description, such as create, and modify the cluster name
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Operation level, such as Critical, Normal
                     * @return Level Operation level, such as Critical, Normal
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Operation level, such as Critical, Normal
                     * @param _level Operation level, such as Critical, Normal
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Operation level description, such as high risk, and normal
                     * @return LevelDesc Operation level description, such as high risk, and normal
                     * 
                     */
                    std::string GetLevelDesc() const;

                    /**
                     * 设置Operation level description, such as high risk, and normal
                     * @param _levelDesc Operation level description, such as high risk, and normal
                     * 
                     */
                    void SetLevelDesc(const std::string& _levelDesc);

                    /**
                     * 判断参数 LevelDesc 是否已赋值
                     * @return LevelDesc 是否已赋值
                     * 
                     */
                    bool LevelDescHasBeenSet() const;

                    /**
                     * 获取Operation start time
                     * @return StartTime Operation start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Operation start time
                     * @param _startTime Operation start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Operation end time
                     * @return EndTime Operation end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Operation end time
                     * @param _endTime Operation end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Operation result description, such as Success and Fail.
                     * @return ResultDesc Operation result description, such as Success and Fail.
                     * 
                     */
                    std::string GetResultDesc() const;

                    /**
                     * 设置Operation result description, such as Success and Fail.
                     * @param _resultDesc Operation result description, such as Success and Fail.
                     * 
                     */
                    void SetResultDesc(const std::string& _resultDesc);

                    /**
                     * 判断参数 ResultDesc 是否已赋值
                     * @return ResultDesc 是否已赋值
                     * 
                     */
                    bool ResultDescHasBeenSet() const;

                    /**
                     * 获取Operation user ID
                     * @return OperateUin Operation user ID
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置Operation user ID
                     * @param _operateUin Operation user ID
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取The jobid corresponding to the operation
                     * @return JobId The jobid corresponding to the operation
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置The jobid corresponding to the operation
                     * @param _jobId The jobid corresponding to the operation
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Operation details
                     * @return OperationDetail Operation details
                     * 
                     */
                    std::string GetOperationDetail() const;

                    /**
                     * 设置Operation details
                     * @param _operationDetail Operation details
                     * 
                     */
                    void SetOperationDetail(const std::string& _operationDetail);

                    /**
                     * 判断参数 OperationDetail 是否已赋值
                     * @return OperationDetail 是否已赋值
                     * 
                     */
                    bool OperationDetailHasBeenSet() const;

                private:

                    /**
                     * Operation name, such as create_instance, and scaleout_instance
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Operation result. Success indicates success; Fail indicates failure.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Operation name description, such as create, and modify the cluster name
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Operation level, such as Critical, Normal
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Operation level description, such as high risk, and normal
                     */
                    std::string m_levelDesc;
                    bool m_levelDescHasBeenSet;

                    /**
                     * Operation start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Operation end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Operation result description, such as Success and Fail.
                     */
                    std::string m_resultDesc;
                    bool m_resultDescHasBeenSet;

                    /**
                     * Operation user ID
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * The jobid corresponding to the operation
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Operation details
                     */
                    std::string m_operationDetail;
                    bool m_operationDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEOPERATION_H_
