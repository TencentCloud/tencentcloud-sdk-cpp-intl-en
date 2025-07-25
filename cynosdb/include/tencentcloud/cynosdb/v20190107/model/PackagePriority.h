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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEPRIORITY_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEPRIORITY_H_

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
                * Resource package deduction priority.
                */
                class PackagePriority : public AbstractModel
                {
                public:
                    PackagePriority();
                    ~PackagePriority() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The resource pack whose deduction priority needs to be customized.
                     * @return PackageId The resource pack whose deduction priority needs to be customized.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置The resource pack whose deduction priority needs to be customized.
                     * @param _packageId The resource pack whose deduction priority needs to be customized.
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Custom deduction priority.
                     * @return DeductionPriority Custom deduction priority.
                     * 
                     */
                    int64_t GetDeductionPriority() const;

                    /**
                     * 设置Custom deduction priority.
                     * @param _deductionPriority Custom deduction priority.
                     * 
                     */
                    void SetDeductionPriority(const int64_t& _deductionPriority);

                    /**
                     * 判断参数 DeductionPriority 是否已赋值
                     * @return DeductionPriority 是否已赋值
                     * 
                     */
                    bool DeductionPriorityHasBeenSet() const;

                private:

                    /**
                     * The resource pack whose deduction priority needs to be customized.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Custom deduction priority.
                     */
                    int64_t m_deductionPriority;
                    bool m_deductionPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEPRIORITY_H_
