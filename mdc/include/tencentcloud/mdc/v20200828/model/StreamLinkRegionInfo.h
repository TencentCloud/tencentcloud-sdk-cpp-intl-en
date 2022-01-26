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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_STREAMLINKREGIONINFO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_STREAMLINKREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * StreamLink region information
                */
                class StreamLinkRegionInfo : public AbstractModel
                {
                public:
                    StreamLinkRegionInfo();
                    ~StreamLinkRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of StreamLink regions
                     * @return Regions List of StreamLink regions
                     */
                    std::vector<RegionInfo> GetRegions() const;

                    /**
                     * 设置List of StreamLink regions
                     * @param Regions List of StreamLink regions
                     */
                    void SetRegions(const std::vector<RegionInfo>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * List of StreamLink regions
                     */
                    std::vector<RegionInfo> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_STREAMLINKREGIONINFO_H_
