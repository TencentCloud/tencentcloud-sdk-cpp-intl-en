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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_COSREGIONINFO_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_COSREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * COS region information
                */
                class CosRegionInfo : public AbstractModel
                {
                public:
                    CosRegionInfo();
                    ~CosRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS region
                     * @return CosRegion COS region
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS region
                     * @param _cosRegion COS region
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取Region description
                     * @return CosRegionName Region description
                     * 
                     */
                    std::string GetCosRegionName() const;

                    /**
                     * 设置Region description
                     * @param _cosRegionName Region description
                     * 
                     */
                    void SetCosRegionName(const std::string& _cosRegionName);

                    /**
                     * 判断参数 CosRegionName 是否已赋值
                     * @return CosRegionName 是否已赋值
                     * 
                     */
                    bool CosRegionNameHasBeenSet() const;

                private:

                    /**
                     * COS region
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * Region description
                     */
                    std::string m_cosRegionName;
                    bool m_cosRegionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_COSREGIONINFO_H_
