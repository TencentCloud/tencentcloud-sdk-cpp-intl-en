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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDATATRANSFORMINFORESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDATATRANSFORMINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformTaskInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeDataTransformInfo response structure.
                */
                class DescribeDataTransformInfoResponse : public AbstractModel
                {
                public:
                    DescribeDataTransformInfoResponse();
                    ~DescribeDataTransformInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of data processing tasks
                     * @return DataTransformTaskInfos List of data processing tasks
                     * 
                     */
                    std::vector<DataTransformTaskInfo> GetDataTransformTaskInfos() const;

                    /**
                     * 判断参数 DataTransformTaskInfos 是否已赋值
                     * @return DataTransformTaskInfos 是否已赋值
                     * 
                     */
                    bool DataTransformTaskInfosHasBeenSet() const;

                    /**
                     * 获取Total tasks
                     * @return TotalCount Total tasks
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of data processing tasks
                     */
                    std::vector<DataTransformTaskInfo> m_dataTransformTaskInfos;
                    bool m_dataTransformTaskInfosHasBeenSet;

                    /**
                     * Total tasks
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDATATRANSFORMINFORESPONSE_H_
