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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_

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
                * Analyze instance version upgrade, connection information used for grayscale after the upgrade
                */
                class UpgradeAnalysisInstanceVersionInfo : public AbstractModel
                {
                public:
                    UpgradeAnalysisInstanceVersionInfo();
                    ~UpgradeAnalysisInstanceVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ip</p>
                     * @return Vip <p>ip</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>ip</p>
                     * @param _vip <p>ip</p>
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
                     * 获取<p>Port</p>
                     * @return Vport <p>Port</p>
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置<p>Port</p>
                     * @param _vport <p>Port</p>
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
                     * 获取<p>Version</p>
                     * @return EngineVersion <p>Version</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>Version</p>
                     * @param _engineVersion <p>Version</p>
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
                     * 获取<p>Expiry time</p>
                     * @return ExpiredTime <p>Expiry time</p>
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 设置<p>Expiry time</p>
                     * @param _expiredTime <p>Expiry time</p>
                     * 
                     */
                    void SetExpiredTime(const int64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * <p>ip</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>Port</p>
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>Version</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Expiry time</p>
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEANALYSISINSTANCEVERSIONINFO_H_
