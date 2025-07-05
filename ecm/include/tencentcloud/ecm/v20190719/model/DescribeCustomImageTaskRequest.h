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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCustomImageTask request structure.
                */
                class DescribeCustomImageTaskRequest : public AbstractModel
                {
                public:
                    DescribeCustomImageTaskRequest();
                    ~DescribeCustomImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Supports querying by key and value.
task-id: async task ID
image-id: image ID
image-name: image name
                     * @return Filters Supports querying by key and value.
task-id: async task ID
image-id: image ID
image-name: image name
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Supports querying by key and value.
task-id: async task ID
image-id: image ID
image-name: image name
                     * @param _filters Supports querying by key and value.
task-id: async task ID
image-id: image ID
image-name: image name
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Supports querying by key and value.
task-id: async task ID
image-id: image ID
image-name: image name
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBECUSTOMIMAGETASKREQUEST_H_
