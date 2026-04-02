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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFOV2_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFOV2_H_

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
                * Project score entity.
                */
                class ScoreInfoV2 : public AbstractModel
                {
                public:
                    ScoreInfoV2();
                    ~ScoreInfoV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID.
                     * @return ProjectID Project ID.
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID.
                     * @param _projectID Project ID.
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取Total project score.
                     * @return Score Total project score.
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置Total project score.
                     * @param _score Total project score.
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取API performance score.
                     * @return ApiPerformanceScore API performance score.
                     * 
                     */
                    double GetApiPerformanceScore() const;

                    /**
                     * 设置API performance score.
                     * @param _apiPerformanceScore API performance score.
                     * 
                     */
                    void SetApiPerformanceScore(const double& _apiPerformanceScore);

                    /**
                     * 判断参数 ApiPerformanceScore 是否已赋值
                     * @return ApiPerformanceScore 是否已赋值
                     * 
                     */
                    bool ApiPerformanceScoreHasBeenSet() const;

                    /**
                     * 获取API availability score.
                     * @return ApiAvailableScore API availability score.
                     * 
                     */
                    double GetApiAvailableScore() const;

                    /**
                     * 设置API availability score.
                     * @param _apiAvailableScore API availability score.
                     * 
                     */
                    void SetApiAvailableScore(const double& _apiAvailableScore);

                    /**
                     * 判断参数 ApiAvailableScore 是否已赋值
                     * @return ApiAvailableScore 是否已赋值
                     * 
                     */
                    bool ApiAvailableScoreHasBeenSet() const;

                    /**
                     * 获取Total API calls.
                     * @return ApiNum Total API calls.
                     * 
                     */
                    int64_t GetApiNum() const;

                    /**
                     * 设置Total API calls.
                     * @param _apiNum Total API calls.
                     * 
                     */
                    void SetApiNum(const int64_t& _apiNum);

                    /**
                     * 判断参数 ApiNum 是否已赋值
                     * @return ApiNum 是否已赋值
                     * 
                     */
                    bool ApiNumHasBeenSet() const;

                    /**
                     * 获取API failures.
                     * @return ApiFail API failures.
                     * 
                     */
                    int64_t GetApiFail() const;

                    /**
                     * 设置API failures.
                     * @param _apiFail API failures.
                     * 
                     */
                    void SetApiFail(const int64_t& _apiFail);

                    /**
                     * 判断参数 ApiFail 是否已赋值
                     * @return ApiFail 是否已赋值
                     * 
                     */
                    bool ApiFailHasBeenSet() const;

                    /**
                     * 获取Average API duration.
                     * @return ApiDuration Average API duration.
                     * 
                     */
                    double GetApiDuration() const;

                    /**
                     * 设置Average API duration.
                     * @param _apiDuration Average API duration.
                     * 
                     */
                    void SetApiDuration(const double& _apiDuration);

                    /**
                     * 判断参数 ApiDuration 是否已赋值
                     * @return ApiDuration 是否已赋值
                     * 
                     */
                    bool ApiDurationHasBeenSet() const;

                    /**
                     * 获取Page performance score.
                     * @return PagePerformanceScore Page performance score.
                     * 
                     */
                    double GetPagePerformanceScore() const;

                    /**
                     * 设置Page performance score.
                     * @param _pagePerformanceScore Page performance score.
                     * 
                     */
                    void SetPagePerformanceScore(const double& _pagePerformanceScore);

                    /**
                     * 判断参数 PagePerformanceScore 是否已赋值
                     * @return PagePerformanceScore 是否已赋值
                     * 
                     */
                    bool PagePerformanceScoreHasBeenSet() const;

                    /**
                     * 获取Page views.
                     * @return PagePv Page views.
                     * 
                     */
                    int64_t GetPagePv() const;

                    /**
                     * 设置Page views.
                     * @param _pagePv Page views.
                     * 
                     */
                    void SetPagePv(const int64_t& _pagePv);

                    /**
                     * 判断参数 PagePv 是否已赋值
                     * @return PagePv 是否已赋值
                     * 
                     */
                    bool PagePvHasBeenSet() const;

                    /**
                     * 获取Unique visitors.
                     * @return PageUv Unique visitors.
                     * 
                     */
                    int64_t GetPageUv() const;

                    /**
                     * 设置Unique visitors.
                     * @param _pageUv Unique visitors.
                     * 
                     */
                    void SetPageUv(const int64_t& _pageUv);

                    /**
                     * 判断参数 PageUv 是否已赋值
                     * @return PageUv 是否已赋值
                     * 
                     */
                    bool PageUvHasBeenSet() const;

                    /**
                     * 获取Page errors.
                     * @return PageError Page errors.
                     * 
                     */
                    int64_t GetPageError() const;

                    /**
                     * 设置Page errors.
                     * @param _pageError Page errors.
                     * 
                     */
                    void SetPageError(const int64_t& _pageError);

                    /**
                     * 判断参数 PageError 是否已赋值
                     * @return PageError 是否已赋值
                     * 
                     */
                    bool PageErrorHasBeenSet() const;

                    /**
                     * 获取First meaningful paint.
                     * @return PageDuration First meaningful paint.
                     * 
                     */
                    double GetPageDuration() const;

                    /**
                     * 设置First meaningful paint.
                     * @param _pageDuration First meaningful paint.
                     * 
                     */
                    void SetPageDuration(const double& _pageDuration);

                    /**
                     * 判断参数 PageDuration 是否已赋值
                     * @return PageDuration 是否已赋值
                     * 
                     */
                    bool PageDurationHasBeenSet() const;

                    /**
                     * 获取Average largest contentful paint (LCP).
                     * @return PageLCP Average largest contentful paint (LCP).
                     * 
                     */
                    double GetPageLCP() const;

                    /**
                     * 设置Average largest contentful paint (LCP).
                     * @param _pageLCP Average largest contentful paint (LCP).
                     * 
                     */
                    void SetPageLCP(const double& _pageLCP);

                    /**
                     * 判断参数 PageLCP 是否已赋值
                     * @return PageLCP 是否已赋值
                     * 
                     */
                    bool PageLCPHasBeenSet() const;

                    /**
                     * 获取Average first input delay (FID).
                     * @return PageFID Average first input delay (FID).
                     * 
                     */
                    double GetPageFID() const;

                    /**
                     * 设置Average first input delay (FID).
                     * @param _pageFID Average first input delay (FID).
                     * 
                     */
                    void SetPageFID(const double& _pageFID);

                    /**
                     * 判断参数 PageFID 是否已赋值
                     * @return PageFID 是否已赋值
                     * 
                     */
                    bool PageFIDHasBeenSet() const;

                    /**
                     * 获取Average cumulative layout shift (CLS).
                     * @return PageCLS Average cumulative layout shift (CLS).
                     * 
                     */
                    double GetPageCLS() const;

                    /**
                     * 设置Average cumulative layout shift (CLS).
                     * @param _pageCLS Average cumulative layout shift (CLS).
                     * 
                     */
                    void SetPageCLS(const double& _pageCLS);

                    /**
                     * 判断参数 PageCLS 是否已赋值
                     * @return PageCLS 是否已赋值
                     * 
                     */
                    bool PageCLSHasBeenSet() const;

                    /**
                     * 获取Average first contentful paint (FCP).
                     * @return PageFCP Average first contentful paint (FCP).
                     * 
                     */
                    double GetPageFCP() const;

                    /**
                     * 设置Average first contentful paint (FCP).
                     * @param _pageFCP Average first contentful paint (FCP).
                     * 
                     */
                    void SetPageFCP(const double& _pageFCP);

                    /**
                     * 判断参数 PageFCP 是否已赋值
                     * @return PageFCP 是否已赋值
                     * 
                     */
                    bool PageFCPHasBeenSet() const;

                    /**
                     * 获取Average interaction to next paint (INP).
                     * @return PageINP Average interaction to next paint (INP).
                     * 
                     */
                    double GetPageINP() const;

                    /**
                     * 设置Average interaction to next paint (INP).
                     * @param _pageINP Average interaction to next paint (INP).
                     * 
                     */
                    void SetPageINP(const double& _pageINP);

                    /**
                     * 判断参数 PageINP 是否已赋值
                     * @return PageINP 是否已赋值
                     * 
                     */
                    bool PageINPHasBeenSet() const;

                    /**
                     * 获取JavaScript error score.
                     * @return JsErrorScore JavaScript error score.
                     * 
                     */
                    double GetJsErrorScore() const;

                    /**
                     * 设置JavaScript error score.
                     * @param _jsErrorScore JavaScript error score.
                     * 
                     */
                    void SetJsErrorScore(const double& _jsErrorScore);

                    /**
                     * 判断参数 JsErrorScore 是否已赋值
                     * @return JsErrorScore 是否已赋值
                     * 
                     */
                    bool JsErrorScoreHasBeenSet() const;

                    /**
                     * 获取Static resource availability score.
                     * @return StaticAvailableScore Static resource availability score.
                     * 
                     */
                    double GetStaticAvailableScore() const;

                    /**
                     * 设置Static resource availability score.
                     * @param _staticAvailableScore Static resource availability score.
                     * 
                     */
                    void SetStaticAvailableScore(const double& _staticAvailableScore);

                    /**
                     * 判断参数 StaticAvailableScore 是否已赋值
                     * @return StaticAvailableScore 是否已赋值
                     * 
                     */
                    bool StaticAvailableScoreHasBeenSet() const;

                    /**
                     * 获取Static resource performance score.
                     * @return StaticPerformanceScore Static resource performance score.
                     * 
                     */
                    double GetStaticPerformanceScore() const;

                    /**
                     * 设置Static resource performance score.
                     * @param _staticPerformanceScore Static resource performance score.
                     * 
                     */
                    void SetStaticPerformanceScore(const double& _staticPerformanceScore);

                    /**
                     * 判断参数 StaticPerformanceScore 是否已赋值
                     * @return StaticPerformanceScore 是否已赋值
                     * 
                     */
                    bool StaticPerformanceScoreHasBeenSet() const;

                    /**
                     * 获取Total static resource requests.
                     * @return StaticNum Total static resource requests.
                     * 
                     */
                    int64_t GetStaticNum() const;

                    /**
                     * 设置Total static resource requests.
                     * @param _staticNum Total static resource requests.
                     * 
                     */
                    void SetStaticNum(const int64_t& _staticNum);

                    /**
                     * 判断参数 StaticNum 是否已赋值
                     * @return StaticNum 是否已赋值
                     * 
                     */
                    bool StaticNumHasBeenSet() const;

                    /**
                     * 获取Static resource loading failures.
                     * @return StaticFail Static resource loading failures.
                     * 
                     */
                    int64_t GetStaticFail() const;

                    /**
                     * 设置Static resource loading failures.
                     * @param _staticFail Static resource loading failures.
                     * 
                     */
                    void SetStaticFail(const int64_t& _staticFail);

                    /**
                     * 判断参数 StaticFail 是否已赋值
                     * @return StaticFail 是否已赋值
                     * 
                     */
                    bool StaticFailHasBeenSet() const;

                    /**
                     * 获取Static resource loading time.
                     * @return StaticDuration Static resource loading time.
                     * 
                     */
                    double GetStaticDuration() const;

                    /**
                     * 设置Static resource loading time.
                     * @param _staticDuration Static resource loading time.
                     * 
                     */
                    void SetStaticDuration(const double& _staticDuration);

                    /**
                     * 判断参数 StaticDuration 是否已赋值
                     * @return StaticDuration 是否已赋值
                     * 
                     */
                    bool StaticDurationHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * Total project score.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * API performance score.
                     */
                    double m_apiPerformanceScore;
                    bool m_apiPerformanceScoreHasBeenSet;

                    /**
                     * API availability score.
                     */
                    double m_apiAvailableScore;
                    bool m_apiAvailableScoreHasBeenSet;

                    /**
                     * Total API calls.
                     */
                    int64_t m_apiNum;
                    bool m_apiNumHasBeenSet;

                    /**
                     * API failures.
                     */
                    int64_t m_apiFail;
                    bool m_apiFailHasBeenSet;

                    /**
                     * Average API duration.
                     */
                    double m_apiDuration;
                    bool m_apiDurationHasBeenSet;

                    /**
                     * Page performance score.
                     */
                    double m_pagePerformanceScore;
                    bool m_pagePerformanceScoreHasBeenSet;

                    /**
                     * Page views.
                     */
                    int64_t m_pagePv;
                    bool m_pagePvHasBeenSet;

                    /**
                     * Unique visitors.
                     */
                    int64_t m_pageUv;
                    bool m_pageUvHasBeenSet;

                    /**
                     * Page errors.
                     */
                    int64_t m_pageError;
                    bool m_pageErrorHasBeenSet;

                    /**
                     * First meaningful paint.
                     */
                    double m_pageDuration;
                    bool m_pageDurationHasBeenSet;

                    /**
                     * Average largest contentful paint (LCP).
                     */
                    double m_pageLCP;
                    bool m_pageLCPHasBeenSet;

                    /**
                     * Average first input delay (FID).
                     */
                    double m_pageFID;
                    bool m_pageFIDHasBeenSet;

                    /**
                     * Average cumulative layout shift (CLS).
                     */
                    double m_pageCLS;
                    bool m_pageCLSHasBeenSet;

                    /**
                     * Average first contentful paint (FCP).
                     */
                    double m_pageFCP;
                    bool m_pageFCPHasBeenSet;

                    /**
                     * Average interaction to next paint (INP).
                     */
                    double m_pageINP;
                    bool m_pageINPHasBeenSet;

                    /**
                     * JavaScript error score.
                     */
                    double m_jsErrorScore;
                    bool m_jsErrorScoreHasBeenSet;

                    /**
                     * Static resource availability score.
                     */
                    double m_staticAvailableScore;
                    bool m_staticAvailableScoreHasBeenSet;

                    /**
                     * Static resource performance score.
                     */
                    double m_staticPerformanceScore;
                    bool m_staticPerformanceScoreHasBeenSet;

                    /**
                     * Total static resource requests.
                     */
                    int64_t m_staticNum;
                    bool m_staticNumHasBeenSet;

                    /**
                     * Static resource loading failures.
                     */
                    int64_t m_staticFail;
                    bool m_staticFailHasBeenSet;

                    /**
                     * Static resource loading time.
                     */
                    double m_staticDuration;
                    bool m_staticDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_SCOREINFOV2_H_
