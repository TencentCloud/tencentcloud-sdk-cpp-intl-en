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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Analysis engine instance version upgrade info
                */
                class UpgradeAnalysisInstanceVersionInfo : public AbstractModel
                {
                public:
                    UpgradeAnalysisInstanceVersionInfo();
                    ~UpgradeAnalysisInstanceVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Grayscale ip for version upgrade</p>
                     * @return Vip <p>Grayscale ip for version upgrade</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Grayscale ip for version upgrade</p>
                     * @param _vip <p>Grayscale ip for version upgrade</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>Grayscale port for version upgrade</p>
                     * @return Vport <p>Grayscale port for version upgrade</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Grayscale port for version upgrade</p>
                     * @param _vport <p>Grayscale port for version upgrade</p>
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>Upgrade to a later version</p>
                     * @return EngineVersion <p>Upgrade to a later version</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>Upgrade to a later version</p>
                     * @param _engineVersion <p>Upgrade to a later version</p>
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>Grayscale event for instance upgrade</p><p>Unit: day</p>
                     * @return ExpireTime <p>Grayscale event for instance upgrade</p><p>Unit: day</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>Grayscale event for instance upgrade</p><p>Unit: day</p>
                     * @param _expireTime <p>Grayscale event for instance upgrade</p><p>Unit: day</p>
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Grayscale ip for version upgrade</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Grayscale port for version upgrade</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Upgrade to a later version</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Grayscale event for instance upgrade</p><p>Unit: day</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_
