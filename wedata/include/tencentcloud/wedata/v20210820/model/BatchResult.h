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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Batch Operation Result
                */
                class BatchResult : public AbstractModel
                {
                public:
                    BatchResult();
                    ~BatchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of Tasks Running
                     * @return Running Number of Tasks Running
                     * 
                     */
                    int64_t GetRunning() const;

                    /**
                     * 设置Number of Tasks Running
                     * @param _running Number of Tasks Running
                     * 
                     */
                    void SetRunning(const int64_t& _running);

                    /**
                     * 判断参数 Running 是否已赋值
                     * @return Running 是否已赋值
                     * 
                     */
                    bool RunningHasBeenSet() const;

                    /**
                     * 获取Number of Tasks Executed Successfully
                     * @return Success Number of Tasks Executed Successfully
                     * 
                     */
                    int64_t GetSuccess() const;

                    /**
                     * 设置Number of Tasks Executed Successfully
                     * @param _success Number of Tasks Executed Successfully
                     * 
                     */
                    void SetSuccess(const int64_t& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取Number of Tasks Executed Failed
                     * @return Failed Number of Tasks Executed Failed
                     * 
                     */
                    int64_t GetFailed() const;

                    /**
                     * 设置Number of Tasks Executed Failed
                     * @param _failed Number of Tasks Executed Failed
                     * 
                     */
                    void SetFailed(const int64_t& _failed);

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取Total Tasks
                     * @return Total Total Tasks
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total Tasks
                     * @param _total Total Tasks
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Number of Tasks Running
                     */
                    int64_t m_running;
                    bool m_runningHasBeenSet;

                    /**
                     * Number of Tasks Executed Successfully
                     */
                    int64_t m_success;
                    bool m_successHasBeenSet;

                    /**
                     * Number of Tasks Executed Failed
                     */
                    int64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * Total Tasks
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULT_H_
