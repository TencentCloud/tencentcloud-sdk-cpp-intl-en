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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PLACEMENT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PLACEMENT_H_

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
                * Location information of cluster instance
                */
                class Placement : public AbstractModel
                {
                public:
                    Placement();
                    ~Placement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the availability zone where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     * @return Zone The ID of the availability zone where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The ID of the availability zone where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     * @param Zone The ID of the availability zone where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The ID of the project to which the instance belongs. You can call the [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) and obtain this ID from the `projectId` field in the response. If this is left empty, the ID of the default project is used.
                     * @return ProjectId The ID of the project to which the instance belongs. You can call the [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) and obtain this ID from the `projectId` field in the response. If this is left empty, the ID of the default project is used.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置The ID of the project to which the instance belongs. You can call the [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) and obtain this ID from the `projectId` field in the response. If this is left empty, the ID of the default project is used.
                     * @param ProjectId The ID of the project to which the instance belongs. You can call the [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) and obtain this ID from the `projectId` field in the response. If this is left empty, the ID of the default project is used.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the availability zone where the instance resides, such as `ap-guangzhou-1`. You can call the [DescribeZones](https://intl.cloud.tencent.com/document/product/213/15707?from_cn_redirect=1) API and obtain this ID from the `Zone` field in the response.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The ID of the project to which the instance belongs. You can call the [DescribeProject](https://intl.cloud.tencent.com/document/api/651/78725?from_cn_redirect=1) and obtain this ID from the `projectId` field in the response. If this is left empty, the ID of the default project is used.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PLACEMENT_H_
