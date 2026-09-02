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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_REGIONCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_REGIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Region configuration
                */
                class RegionConfig : public AbstractModel
                {
                public:
                    RegionConfig();
                    ~RegionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
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
                     * 获取<p>Region in Chinese</p>
                     * @return RegionName <p>Region in Chinese</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>Region in Chinese</p>
                     * @param _regionName <p>Region in Chinese</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>Outside Chinese Mainland or not</p>
                     * @return Foreign <p>Outside Chinese Mainland or not</p>
                     * 
                     */
                    int64_t GetForeign() const;

                    /**
                     * 设置<p>Outside Chinese Mainland or not</p>
                     * @param _foreign <p>Outside Chinese Mainland or not</p>
                     * 
                     */
                    void SetForeign(const int64_t& _foreign);

                    /**
                     * 判断参数 Foreign 是否已赋值
                     * @return Foreign 是否已赋值
                     * 
                     */
                    bool ForeignHasBeenSet() const;

                    /**
                     * 获取<p>Region code</p>
                     * @return Code <p>Region code</p>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>Region code</p>
                     * @param _code <p>Region code</p>
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>Whether self-driving cloud</p>
                     * @return IsAutoDriveCloud <p>Whether self-driving cloud</p>
                     * 
                     */
                    int64_t GetIsAutoDriveCloud() const;

                    /**
                     * 设置<p>Whether self-driving cloud</p>
                     * @param _isAutoDriveCloud <p>Whether self-driving cloud</p>
                     * 
                     */
                    void SetIsAutoDriveCloud(const int64_t& _isAutoDriveCloud);

                    /**
                     * 判断参数 IsAutoDriveCloud 是否已赋值
                     * @return IsAutoDriveCloud 是否已赋值
                     * 
                     */
                    bool IsAutoDriveCloudHasBeenSet() const;

                    /**
                     * 获取<p>nat support</p>
                     * @return IsSupportNat <p>nat support</p>
                     * 
                     */
                    int64_t GetIsSupportNat() const;

                    /**
                     * 设置<p>nat support</p>
                     * @param _isSupportNat <p>nat support</p>
                     * 
                     */
                    void SetIsSupportNat(const int64_t& _isSupportNat);

                    /**
                     * 判断参数 IsSupportNat 是否已赋值
                     * @return IsSupportNat 是否已赋值
                     * 
                     */
                    bool IsSupportNatHasBeenSet() const;

                    /**
                     * 获取<p>Region information</p>
                     * @return RegionArea <p>Region information</p>
                     * 
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置<p>Region information</p>
                     * @param _regionArea <p>Region information</p>
                     * 
                     */
                    void SetRegionArea(const std::string& _regionArea);

                    /**
                     * 判断参数 RegionArea 是否已赋值
                     * @return RegionArea 是否已赋值
                     * 
                     */
                    bool RegionAreaHasBeenSet() const;

                    /**
                     * 获取<p>Region in English</p>
                     * @return RegionNameEN <p>Region in English</p>
                     * 
                     */
                    std::string GetRegionNameEN() const;

                    /**
                     * 设置<p>Region in English</p>
                     * @param _regionNameEN <p>Region in English</p>
                     * 
                     */
                    void SetRegionNameEN(const std::string& _regionNameEN);

                    /**
                     * 判断参数 RegionNameEN 是否已赋值
                     * @return RegionNameEN 是否已赋值
                     * 
                     */
                    bool RegionNameENHasBeenSet() const;

                private:

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Region in Chinese</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>Outside Chinese Mainland or not</p>
                     */
                    int64_t m_foreign;
                    bool m_foreignHasBeenSet;

                    /**
                     * <p>Region code</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>Whether self-driving cloud</p>
                     */
                    int64_t m_isAutoDriveCloud;
                    bool m_isAutoDriveCloudHasBeenSet;

                    /**
                     * <p>nat support</p>
                     */
                    int64_t m_isSupportNat;
                    bool m_isSupportNatHasBeenSet;

                    /**
                     * <p>Region information</p>
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * <p>Region in English</p>
                     */
                    std::string m_regionNameEN;
                    bool m_regionNameENHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REGIONCONFIG_H_
