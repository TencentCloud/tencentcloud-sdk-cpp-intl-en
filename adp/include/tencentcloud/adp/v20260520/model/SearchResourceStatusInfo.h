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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHRESOURCESTATUSINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHRESOURCESTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Search for resource status information
                */
                class SearchResourceStatusInfo : public AbstractModel
                {
                public:
                    SearchResourceStatusInfo();
                    ~SearchResourceStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Search resource status: AVAILABLE(1)=resource available, EXHAUSTED(2)=resource used up. Enumeration values: 1: resource available, 2: resource used up
                     * @return ResourceStatus Search resource status: AVAILABLE(1)=resource available, EXHAUSTED(2)=resource used up. Enumeration values: 1: resource available, 2: resource used up
                     * 
                     */
                    int64_t GetResourceStatus() const;

                    /**
                     * 设置Search resource status: AVAILABLE(1)=resource available, EXHAUSTED(2)=resource used up. Enumeration values: 1: resource available, 2: resource used up
                     * @param _resourceStatus Search resource status: AVAILABLE(1)=resource available, EXHAUSTED(2)=resource used up. Enumeration values: 1: resource available, 2: resource used up
                     * 
                     */
                    void SetResourceStatus(const int64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * Search resource status: AVAILABLE(1)=resource available, EXHAUSTED(2)=resource used up. Enumeration values: 1: resource available, 2: resource used up
                     */
                    int64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHRESOURCESTATUSINFO_H_
