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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STOPPARAMS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STOPPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Parameters used for stopping services.
                */
                class StopParams : public AbstractModel
                {
                public:
                    StopParams();
                    ~StopParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Security mode: safe.
Default mode: default.
                     * @return StopPolicy Security mode: safe.
Default mode: default.
                     * 
                     */
                    std::string GetStopPolicy() const;

                    /**
                     * 设置Security mode: safe.
Default mode: default.
                     * @param _stopPolicy Security mode: safe.
Default mode: default.
                     * 
                     */
                    void SetStopPolicy(const std::string& _stopPolicy);

                    /**
                     * 判断参数 StopPolicy 是否已赋值
                     * @return StopPolicy 是否已赋值
                     * 
                     */
                    bool StopPolicyHasBeenSet() const;

                    /**
                     * 获取Thread Count
                     * @return ThreadCount Thread Count
                     * 
                     */
                    int64_t GetThreadCount() const;

                    /**
                     * 设置Thread Count
                     * @param _threadCount Thread Count
                     * 
                     */
                    void SetThreadCount(const int64_t& _threadCount);

                    /**
                     * 判断参数 ThreadCount 是否已赋值
                     * @return ThreadCount 是否已赋值
                     * 
                     */
                    bool ThreadCountHasBeenSet() const;

                private:

                    /**
                     * Security mode: safe.
Default mode: default.
                     */
                    std::string m_stopPolicy;
                    bool m_stopPolicyHasBeenSet;

                    /**
                     * Thread Count
                     */
                    int64_t m_threadCount;
                    bool m_threadCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STOPPARAMS_H_
