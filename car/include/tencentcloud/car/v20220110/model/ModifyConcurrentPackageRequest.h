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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYCONCURRENTPACKAGEREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYCONCURRENTPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * ModifyConcurrentPackage request structure.
                */
                class ModifyConcurrentPackageRequest : public AbstractModel
                {
                public:
                    ModifyConcurrentPackageRequest();
                    ~ModifyConcurrentPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Concurrency pack ID.
                     * @return ConcurrentId Concurrency pack ID.
                     * 
                     */
                    std::string GetConcurrentId() const;

                    /**
                     * 设置Concurrency pack ID.
                     * @param _concurrentId Concurrency pack ID.
                     * 
                     */
                    void SetConcurrentId(const std::string& _concurrentId);

                    /**
                     * 判断参数 ConcurrentId 是否已赋值
                     * @return ConcurrentId 是否已赋值
                     * 
                     */
                    bool ConcurrentIdHasBeenSet() const;

                    /**
                     * 获取Concurrency pack name.
                     * @return Name Concurrency pack name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Concurrency pack name.
                     * @param _name Concurrency pack name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Concurrency pack ID.
                     */
                    std::string m_concurrentId;
                    bool m_concurrentIdHasBeenSet;

                    /**
                     * Concurrency pack name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYCONCURRENTPACKAGEREQUEST_H_
