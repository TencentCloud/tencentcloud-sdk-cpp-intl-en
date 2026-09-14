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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORREGIONSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORREGIONSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Acceleration region info
                */
                class AcceleratorRegionSet : public AbstractModel
                {
                public:
                    AcceleratorRegionSet();
                    ~AcceleratorRegionSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Chinese Name of Region.</p>
                     * @return Name <p>Chinese Name of Region.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Chinese Name of Region.</p>
                     * @param _name <p>Chinese Name of Region.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Whether available; 0: unavailable, 1: available.</p>
                     * @return IsAvailable <p>Whether available; 0: unavailable, 1: available.</p>
                     * 
                     */
                    int64_t GetIsAvailable() const;

                    /**
                     * 设置<p>Whether available; 0: unavailable, 1: available.</p>
                     * @param _isAvailable <p>Whether available; 0: unavailable, 1: available.</p>
                     * 
                     */
                    void SetIsAvailable(const int64_t& _isAvailable);

                    /**
                     * 判断参数 IsAvailable 是否已赋值
                     * @return IsAvailable 是否已赋值
                     * 
                     */
                    bool IsAvailableHasBeenSet() const;

                    /**
                     * 获取<p>Regional information.</p>
                     * @return Region <p>Regional information.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Regional information.</p>
                     * @param _region <p>Regional information.</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Zone name.</p>
                     * @return AreaName <p>Zone name.</p>
                     * 
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置<p>Zone name.</p>
                     * @param _areaName <p>Zone name.</p>
                     * 
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     * 
                     */
                    bool AreaNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a China region.</p>
                     * @return IsChinaMainland <p>Whether it is a China region.</p>
                     * 
                     */
                    uint64_t GetIsChinaMainland() const;

                    /**
                     * 设置<p>Whether it is a China region.</p>
                     * @param _isChinaMainland <p>Whether it is a China region.</p>
                     * 
                     */
                    void SetIsChinaMainland(const uint64_t& _isChinaMainland);

                    /**
                     * 判断参数 IsChinaMainland 是否已赋值
                     * @return IsChinaMainland 是否已赋值
                     * 
                     */
                    bool IsChinaMainlandHasBeenSet() const;

                    /**
                     * 获取<p>Support the IspType type.</p>
                     * @return SupportIspType <p>Support the IspType type.</p>
                     * 
                     */
                    std::vector<std::string> GetSupportIspType() const;

                    /**
                     * 设置<p>Support the IspType type.</p>
                     * @param _supportIspType <p>Support the IspType type.</p>
                     * 
                     */
                    void SetSupportIspType(const std::vector<std::string>& _supportIspType);

                    /**
                     * 判断参数 SupportIspType 是否已赋值
                     * @return SupportIspType 是否已赋值
                     * 
                     */
                    bool SupportIspTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a Tencent region.</p>
                     * @return IsTencentRegion <p>Whether it is a Tencent region.</p>
                     * 
                     */
                    uint64_t GetIsTencentRegion() const;

                    /**
                     * 设置<p>Whether it is a Tencent region.</p>
                     * @param _isTencentRegion <p>Whether it is a Tencent region.</p>
                     * 
                     */
                    void SetIsTencentRegion(const uint64_t& _isTencentRegion);

                    /**
                     * 判断参数 IsTencentRegion 是否已赋值
                     * @return IsTencentRegion 是否已赋值
                     * 
                     */
                    bool IsTencentRegionHasBeenSet() const;

                private:

                    /**
                     * <p>Chinese Name of Region.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Whether available; 0: unavailable, 1: available.</p>
                     */
                    int64_t m_isAvailable;
                    bool m_isAvailableHasBeenSet;

                    /**
                     * <p>Regional information.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Zone name.</p>
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                    /**
                     * <p>Whether it is a China region.</p>
                     */
                    uint64_t m_isChinaMainland;
                    bool m_isChinaMainlandHasBeenSet;

                    /**
                     * <p>Support the IspType type.</p>
                     */
                    std::vector<std::string> m_supportIspType;
                    bool m_supportIspTypeHasBeenSet;

                    /**
                     * <p>Whether it is a Tencent region.</p>
                     */
                    uint64_t m_isTencentRegion;
                    bool m_isTencentRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_ACCELERATORREGIONSET_H_
