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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RUMPVINFO_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RUMPVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * RUM log object
                */
                class RumPvInfo : public AbstractModel
                {
                public:
                    RumPvInfo();
                    ~RumPvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Number of PVs
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Pv Number of PVs
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPv() const;

                    /**
                     * 设置Number of PVs
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Pv Number of PVs
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPv(const std::string& _pv);

                    /**
                     * 判断参数 Pv 是否已赋值
                     * @return Pv 是否已赋值
                     */
                    bool PvHasBeenSet() const;

                    /**
                     * 获取Time
                     * @return CreateTime Time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time
                     * @param CreateTime Time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of PVs
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pv;
                    bool m_pvHasBeenSet;

                    /**
                     * Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RUMPVINFO_H_
