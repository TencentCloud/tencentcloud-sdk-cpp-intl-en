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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ImageTask.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCustomImageTask response structure.
                */
                class DescribeCustomImageTaskResponse : public AbstractModel
                {
                public:
                    DescribeCustomImageTaskResponse();
                    ~DescribeCustomImageTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Import task details
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageTaskSet Import task details
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ImageTask> GetImageTaskSet() const;

                    /**
                     * 判断参数 ImageTaskSet 是否已赋值
                     * @return ImageTaskSet 是否已赋值
                     * 
                     */
                    bool ImageTaskSetHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return TotalCount Total number
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
                     * Import task details
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageTask> m_imageTaskSet;
                    bool m_imageTaskSetHasBeenSet;

                    /**
                     * Total number
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKRESPONSE_H_
