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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AIOPTIMIZERSTATUS_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AIOPTIMIZERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AI optimizer status
                */
                class AIOptimizerStatus : public AbstractModel
                {
                public:
                    AIOptimizerStatus();
                    ~AIOptimizerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Status. closing-Closing, closed-Closed, opening-Opening, training-Training, trained-Trained, train_failed-Training failed.</p>
                     * @return Status <p>Status. closing-Closing, closed-Closed, opening-Opening, training-Training, trained-Trained, train_failed-Training failed.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status. closing-Closing, closed-Closed, opening-Opening, training-Training, trained-Trained, train_failed-Training failed.</p>
                     * @param _status <p>Status. closing-Closing, closed-Closed, opening-Opening, training-Training, trained-Trained, train_failed-Training failed.</p>
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
                     * 获取<p>Start time.</p>
                     * @return OpenTime <p>Start time.</p>
                     * 
                     */
                    std::string GetOpenTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _openTime <p>Start time.</p>
                     * 
                     */
                    void SetOpenTime(const std::string& _openTime);

                    /**
                     * 判断参数 OpenTime 是否已赋值
                     * @return OpenTime 是否已赋值
                     * 
                     */
                    bool OpenTimeHasBeenSet() const;

                    /**
                     * 获取<p>Training progress</p>
                     * @return TrainingProgress <p>Training progress</p>
                     * 
                     */
                    int64_t GetTrainingProgress() const;

                    /**
                     * 设置<p>Training progress</p>
                     * @param _trainingProgress <p>Training progress</p>
                     * 
                     */
                    void SetTrainingProgress(const int64_t& _trainingProgress);

                    /**
                     * 判断参数 TrainingProgress 是否已赋值
                     * @return TrainingProgress 是否已赋值
                     * 
                     */
                    bool TrainingProgressHasBeenSet() const;

                private:

                    /**
                     * <p>Status. closing-Closing, closed-Closed, opening-Opening, training-Training, trained-Trained, train_failed-Training failed.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    std::string m_openTime;
                    bool m_openTimeHasBeenSet;

                    /**
                     * <p>Training progress</p>
                     */
                    int64_t m_trainingProgress;
                    bool m_trainingProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AIOPTIMIZERSTATUS_H_
