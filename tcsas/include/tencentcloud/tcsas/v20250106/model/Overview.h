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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_OVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_OVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Global overview data
                */
                class Overview : public AbstractModel
                {
                public:
                    Overview();
                    ~Overview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Superapps
                     * @return AppNum Superapps
                     * 
                     */
                    int64_t GetAppNum() const;

                    /**
                     * 设置Superapps
                     * @param _appNum Superapps
                     * 
                     */
                    void SetAppNum(const int64_t& _appNum);

                    /**
                     * 判断参数 AppNum 是否已赋值
                     * @return AppNum 是否已赋值
                     * 
                     */
                    bool AppNumHasBeenSet() const;

                    /**
                     * 获取Teams
                     * @return CorpNum Teams
                     * 
                     */
                    int64_t GetCorpNum() const;

                    /**
                     * 设置Teams
                     * @param _corpNum Teams
                     * 
                     */
                    void SetCorpNum(const int64_t& _corpNum);

                    /**
                     * 判断参数 CorpNum 是否已赋值
                     * @return CorpNum 是否已赋值
                     * 
                     */
                    bool CorpNumHasBeenSet() const;

                    /**
                     * 获取Refresh time
                     * @return FlushTime Refresh time
                     * 
                     */
                    std::string GetFlushTime() const;

                    /**
                     * 设置Refresh time
                     * @param _flushTime Refresh time
                     * 
                     */
                    void SetFlushTime(const std::string& _flushTime);

                    /**
                     * 判断参数 FlushTime 是否已赋值
                     * @return FlushTime 是否已赋值
                     * 
                     */
                    bool FlushTimeHasBeenSet() const;

                    /**
                     * 获取Mini programs
                     * @return MiniAppNum Mini programs
                     * 
                     */
                    int64_t GetMiniAppNum() const;

                    /**
                     * 设置Mini programs
                     * @param _miniAppNum Mini programs
                     * 
                     */
                    void SetMiniAppNum(const int64_t& _miniAppNum);

                    /**
                     * 判断参数 MiniAppNum 是否已赋值
                     * @return MiniAppNum 是否已赋值
                     * 
                     */
                    bool MiniAppNumHasBeenSet() const;

                    /**
                     * 获取Mini games
                     * @return MiniGameNum Mini games
                     * 
                     */
                    int64_t GetMiniGameNum() const;

                    /**
                     * 设置Mini games
                     * @param _miniGameNum Mini games
                     * 
                     */
                    void SetMiniGameNum(const int64_t& _miniGameNum);

                    /**
                     * 判断参数 MiniGameNum 是否已赋值
                     * @return MiniGameNum 是否已赋值
                     * 
                     */
                    bool MiniGameNumHasBeenSet() const;

                    /**
                     * 获取Mini game visits
                     * @return MiniGameVisitNum Mini game visits
                     * 
                     */
                    int64_t GetMiniGameVisitNum() const;

                    /**
                     * 设置Mini game visits
                     * @param _miniGameVisitNum Mini game visits
                     * 
                     */
                    void SetMiniGameVisitNum(const int64_t& _miniGameVisitNum);

                    /**
                     * 判断参数 MiniGameVisitNum 是否已赋值
                     * @return MiniGameVisitNum 是否已赋值
                     * 
                     */
                    bool MiniGameVisitNumHasBeenSet() const;

                    /**
                     * 获取Mini program updates
                     * @return UpdateNum Mini program updates
                     * 
                     */
                    int64_t GetUpdateNum() const;

                    /**
                     * 设置Mini program updates
                     * @param _updateNum Mini program updates
                     * 
                     */
                    void SetUpdateNum(const int64_t& _updateNum);

                    /**
                     * 判断参数 UpdateNum 是否已赋值
                     * @return UpdateNum 是否已赋值
                     * 
                     */
                    bool UpdateNumHasBeenSet() const;

                    /**
                     * 获取Mini program visits
                     * @return VisitNum Mini program visits
                     * 
                     */
                    int64_t GetVisitNum() const;

                    /**
                     * 设置Mini program visits
                     * @param _visitNum Mini program visits
                     * 
                     */
                    void SetVisitNum(const int64_t& _visitNum);

                    /**
                     * 判断参数 VisitNum 是否已赋值
                     * @return VisitNum 是否已赋值
                     * 
                     */
                    bool VisitNumHasBeenSet() const;

                private:

                    /**
                     * Superapps
                     */
                    int64_t m_appNum;
                    bool m_appNumHasBeenSet;

                    /**
                     * Teams
                     */
                    int64_t m_corpNum;
                    bool m_corpNumHasBeenSet;

                    /**
                     * Refresh time
                     */
                    std::string m_flushTime;
                    bool m_flushTimeHasBeenSet;

                    /**
                     * Mini programs
                     */
                    int64_t m_miniAppNum;
                    bool m_miniAppNumHasBeenSet;

                    /**
                     * Mini games
                     */
                    int64_t m_miniGameNum;
                    bool m_miniGameNumHasBeenSet;

                    /**
                     * Mini game visits
                     */
                    int64_t m_miniGameVisitNum;
                    bool m_miniGameVisitNumHasBeenSet;

                    /**
                     * Mini program updates
                     */
                    int64_t m_updateNum;
                    bool m_updateNumHasBeenSet;

                    /**
                     * Mini program visits
                     */
                    int64_t m_visitNum;
                    bool m_visitNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_OVERVIEW_H_
