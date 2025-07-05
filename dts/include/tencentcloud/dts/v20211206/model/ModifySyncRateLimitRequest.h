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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCRATELIMITREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCRATELIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifySyncRateLimit request structure.
                */
                class ModifySyncRateLimitRequest : public AbstractModel
                {
                public:
                    ModifySyncRateLimitRequest();
                    ~ModifySyncRateLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Migration task ID
                     * @return JobId Migration task ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Migration task ID
                     * @param _jobId Migration task ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Number of full export threads for sync task. Value range: 1-16.
                     * @return DumpThread Number of full export threads for sync task. Value range: 1-16.
                     * 
                     */
                    int64_t GetDumpThread() const;

                    /**
                     * 设置Number of full export threads for sync task. Value range: 1-16.
                     * @param _dumpThread Number of full export threads for sync task. Value range: 1-16.
                     * 
                     */
                    void SetDumpThread(const int64_t& _dumpThread);

                    /**
                     * 判断参数 DumpThread 是否已赋值
                     * @return DumpThread 是否已赋值
                     * 
                     */
                    bool DumpThreadHasBeenSet() const;

                    /**
                     * 获取The full export Rps for sync task. The value needs to be greater than 0.
                     * @return DumpRps The full export Rps for sync task. The value needs to be greater than 0.
                     * 
                     */
                    int64_t GetDumpRps() const;

                    /**
                     * 设置The full export Rps for sync task. The value needs to be greater than 0.
                     * @param _dumpRps The full export Rps for sync task. The value needs to be greater than 0.
                     * 
                     */
                    void SetDumpRps(const int64_t& _dumpRps);

                    /**
                     * 判断参数 DumpRps 是否已赋值
                     * @return DumpRps 是否已赋值
                     * 
                     */
                    bool DumpRpsHasBeenSet() const;

                    /**
                     * 获取Number of full import threads for sync task. Value range: 1-16.
                     * @return LoadThread Number of full import threads for sync task. Value range: 1-16.
                     * 
                     */
                    int64_t GetLoadThread() const;

                    /**
                     * 设置Number of full import threads for sync task. Value range: 1-16.
                     * @param _loadThread Number of full import threads for sync task. Value range: 1-16.
                     * 
                     */
                    void SetLoadThread(const int64_t& _loadThread);

                    /**
                     * 判断参数 LoadThread 是否已赋值
                     * @return LoadThread 是否已赋值
                     * 
                     */
                    bool LoadThreadHasBeenSet() const;

                    /**
                     * 获取Number of incremental import threads for sync task. Value range: 1-128.
                     * @return SinkerThread Number of incremental import threads for sync task. Value range: 1-128.
                     * 
                     */
                    int64_t GetSinkerThread() const;

                    /**
                     * 设置Number of incremental import threads for sync task. Value range: 1-128.
                     * @param _sinkerThread Number of incremental import threads for sync task. Value range: 1-128.
                     * 
                     */
                    void SetSinkerThread(const int64_t& _sinkerThread);

                    /**
                     * 判断参数 SinkerThread 是否已赋值
                     * @return SinkerThread 是否已赋值
                     * 
                     */
                    bool SinkerThreadHasBeenSet() const;

                    /**
                     * 获取The full import Rps for sync task.
                     * @return LoadRps The full import Rps for sync task.
                     * 
                     */
                    int64_t GetLoadRps() const;

                    /**
                     * 设置The full import Rps for sync task.
                     * @param _loadRps The full import Rps for sync task.
                     * 
                     */
                    void SetLoadRps(const int64_t& _loadRps);

                    /**
                     * 判断参数 LoadRps 是否已赋值
                     * @return LoadRps 是否已赋值
                     * 
                     */
                    bool LoadRpsHasBeenSet() const;

                private:

                    /**
                     * Migration task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Number of full export threads for sync task. Value range: 1-16.
                     */
                    int64_t m_dumpThread;
                    bool m_dumpThreadHasBeenSet;

                    /**
                     * The full export Rps for sync task. The value needs to be greater than 0.
                     */
                    int64_t m_dumpRps;
                    bool m_dumpRpsHasBeenSet;

                    /**
                     * Number of full import threads for sync task. Value range: 1-16.
                     */
                    int64_t m_loadThread;
                    bool m_loadThreadHasBeenSet;

                    /**
                     * Number of incremental import threads for sync task. Value range: 1-128.
                     */
                    int64_t m_sinkerThread;
                    bool m_sinkerThreadHasBeenSet;

                    /**
                     * The full import Rps for sync task.
                     */
                    int64_t m_loadRps;
                    bool m_loadRpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSYNCRATELIMITREQUEST_H_
