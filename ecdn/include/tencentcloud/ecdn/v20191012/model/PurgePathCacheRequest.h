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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEPATHCACHEREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEPATHCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * PurgePathCache request structure.
                */
                class PurgePathCacheRequest : public AbstractModel
                {
                public:
                    PurgePathCacheRequest();
                    ~PurgePathCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of directories to be purged. The protocol header must be included.
                     * @return Paths List of directories to be purged. The protocol header must be included.
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置List of directories to be purged. The protocol header must be included.
                     * @param _paths List of directories to be purged. The protocol header must be included.
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取Purge type. flush: purges updated resources, delete: purges all resources.
                     * @return FlushType Purge type. flush: purges updated resources, delete: purges all resources.
                     * 
                     */
                    std::string GetFlushType() const;

                    /**
                     * 设置Purge type. flush: purges updated resources, delete: purges all resources.
                     * @param _flushType Purge type. flush: purges updated resources, delete: purges all resources.
                     * 
                     */
                    void SetFlushType(const std::string& _flushType);

                    /**
                     * 判断参数 FlushType 是否已赋值
                     * @return FlushType 是否已赋值
                     * 
                     */
                    bool FlushTypeHasBeenSet() const;

                private:

                    /**
                     * List of directories to be purged. The protocol header must be included.
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * Purge type. flush: purges updated resources, delete: purges all resources.
                     */
                    std::string m_flushType;
                    bool m_flushTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_PURGEPATHCACHEREQUEST_H_
